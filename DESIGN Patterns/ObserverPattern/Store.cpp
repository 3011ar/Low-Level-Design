#include "Observable/IphoneObservableImpl.h"
#include "Observer/EmailAlertObserverImpl.h"
#include "Observer/MobileAlertObserverImpl.h"

int main() {
    StocksObservable* iphoneStockObservable = new IphoneObservableImpl();

    NotificationAlertObserver* observer1 = new EmailAlertObserverImpl("xyz@gmail.com", iphoneStockObservable);
    NotificationAlertObserver* observer2 = new EmailAlertObserverImpl("xy1z@gmail.com", iphoneStockObservable);
    NotificationAlertObserver* observer3 = new MobileAlertObserverImpl("xyz_user", iphoneStockObservable);

    iphoneStockObservable->add(observer1);
    iphoneStockObservable->add(observer2);
    iphoneStockObservable->add(observer3);

    iphoneStockObservable->setStockCount(10);

    delete observer1;
    delete observer2;
    delete observer3;
    delete iphoneStockObservable;

    return 0;
}
