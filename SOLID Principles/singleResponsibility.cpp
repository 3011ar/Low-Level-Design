#include <iostream>
#include <string>
using namespace std;

// Marker class
class Marker {
public:
    string name;
    string color;
    int year;
    int price;

    Marker(string name, string color, int year, int price) {
        this->name = name;
        this->color = color;
        this->year = year;
        this->price = price;
    }
};

// Invoice class (business logic)
class Invoice {
private:
    Marker marker;
    int quantity;

public:
    Invoice(Marker marker, int quantity) : marker(marker), quantity(quantity) {}

    int calculateTotal() {
        int price = marker.price * quantity;
        return price;
    }

};

// InvoiceDao class (data access)
class InvoiceDao {
private:
    Invoice invoice;

public:
    InvoiceDao(Invoice invoice) : invoice(invoice) {}

    void saveToDb() {
        // Placeholder for DB saving logic
        cout << "Saving invoice to database..." << endl;
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

    // Create an Invoice for 5 markers
    Invoice invoice(marker, 5);

    // Create InvoiceDao and save to DB
    InvoiceDao invoiceDao(invoice);
    invoiceDao.saveToDb();

    // Create InvoicePrinter and print the invoice
    InvoicePrinter invoicePrinter(invoice);
    invoicePrinter.print();

    return 0;
}
