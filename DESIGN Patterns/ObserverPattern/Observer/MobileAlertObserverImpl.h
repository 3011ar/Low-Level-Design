#pragma once
#include "NotificationAlertObserver.h"
#include "../Observable/StocksObservable.h"
#include <iostream>
#include <string>

class MobileAlertObserverImpl : public NotificationAlertObserver {
private:
    std::string userName;
    StocksObservable* observable;

public:
    MobileAlertObserverImpl(std::string userName, StocksObservable* observable)
        : userName(userName), observable(observable) {}

    void update() override {
        sendMsgOnMobile(userName, "Product is in stock, hurry up!");
    }

private:
    void sendMsgOnMobile(const std::string& userName, const std::string& msg) {
        std::cout << "Message sent to: " << userName << " with message: " << msg << std::endl;
    }
};
