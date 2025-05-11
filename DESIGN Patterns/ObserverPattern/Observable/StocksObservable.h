#pragma once
#include "../Observer/NotificationAlertObserver.h"

class StocksObservable {
public:
    virtual void add(NotificationAlertObserver* observer) = 0;
    virtual void remove(NotificationAlertObserver* observer) = 0;
    virtual void notifySubscribers() = 0;
    virtual void setStockCount(int newStockAdded) = 0;
    virtual int getStockCount() = 0;
    virtual ~StocksObservable() = default;
};
