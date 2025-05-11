#pragma once
#include "StocksObservable.h"
#include <vector>
#include <algorithm>

class IphoneObservableImpl : public StocksObservable {
private:
    std::vector<NotificationAlertObserver*> observerList;
    int stockCount = 0;

public:
    void add(NotificationAlertObserver* observer) override {
        observerList.push_back(observer);
    }

    void remove(NotificationAlertObserver* observer) override {
        observerList.erase(std::remove(observerList.begin(), observerList.end(), observer), observerList.end());
    }

    void notifySubscribers() override {
        for (auto observer : observerList) {
            observer->update();
        }
    }

    void setStockCount(int newStockAdded) override {
        bool wasOutOfStock = (stockCount == 0);
        stockCount += newStockAdded;
        if (wasOutOfStock && stockCount > 0) {
            notifySubscribers();
        }
    }

    int getStockCount() override {
        return stockCount;
    }
};
