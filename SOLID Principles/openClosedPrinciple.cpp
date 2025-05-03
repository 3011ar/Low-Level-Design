#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Marker class
class Marker {
public:
    string name;
    string color;
    int year;
    int price;

    Marker(string name, string color, int year, int price)
        : name(name), color(color), year(year), price(price) {}
};

// Invoice class (business logic)
class Invoice {
private:
    Marker marker;
    int quantity;

public:
    Invoice(Marker marker, int quantity) : marker(marker), quantity(quantity) {}

    int calculateTotal() const {
        return marker.price * quantity;
    }

    string getMarkerName() const {
        return marker.name;
    }
};

// InvoiceDao interface (abstract class)
class InvoiceDao {
public:
    virtual void save(const Invoice& invoice) = 0;
    virtual ~InvoiceDao() = default;
};

// DatabaseInvoiceDao class
class DatabaseInvoiceDao : public InvoiceDao {
public:
    void save(const Invoice& invoice) override {
        cout << "Saving invoice to database..." << endl;
        cout << "Total: " << invoice.calculateTotal() << endl;
    }
};

// FileInvoiceDao class
class FileInvoiceDao : public InvoiceDao {
public:
    void save(const Invoice& invoice) override {
        cout << "Saving invoice to file..." << endl;
        cout << "Total: " << invoice.calculateTotal() << endl;
    }
};

// InvoicePrinter class (printing/display)
class InvoicePrinter {
private:
    Invoice invoice;

public:
    InvoicePrinter(Invoice invoice) : invoice(invoice) {}

    void print() {
        cout << "Invoice Details:" << endl;
        cout << "Total Price: " << invoice.calculateTotal() << endl;
    }
};

// Main function
int main() {
    // Create a Marker
    Marker marker("Reynolds", "Blue", 2022, 10);

    // Create an Invoice
    Invoice invoice(marker, 5);

    // Create DatabaseInvoiceDao and save to database
    InvoiceDao* dbDao = new DatabaseInvoiceDao();
    dbDao->save(invoice);
    delete dbDao;

    cout << "-------------------------" << endl;

    // Create FileInvoiceDao and save to file
    InvoiceDao* fileDao = new FileInvoiceDao();
    fileDao->save(invoice);
    delete fileDao;

    cout << "-------------------------" << endl;

    // Create InvoicePrinter and print the invoice
    InvoicePrinter printer(invoice);  // <-- corrected
    printer.print();                  // <-- corrected

    return 0;
}
