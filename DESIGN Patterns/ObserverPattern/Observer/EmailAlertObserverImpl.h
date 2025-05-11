#pragma once
#include "NotificationAlertObserver.h"
#include "../Observable/StocksObservable.h"
#include <iostream>
#include <string>

class EmailAlertObserverImpl : public NotificationAlertObserver {
private:
    std::string emailId;
    StocksObservable* observable;

public:
    EmailAlertObserverImpl(std::string emailId, StocksObservable* observable)
        : emailId(emailId), observable(observable) {}

    void update() override {
        sendMail(emailId, "Product is in stock, hurry up!");
    }

private:
    void sendMail(const std::string& emailId, const std::string& msg) {
        std::cout << "Mail sent to: " << emailId << " with message: " << msg << std::endl;
    }
};
