//
// Created by tuddy on 15-Mar-22.
//

#include "order.h"

int Order::orderIndex = 200;

Order::Order() {
    orderIndex++;
    number = orderIndex;

    // current date and time on the current system
    time_t now = time(0);
    // convert now to string form
    dateTime = string(ctime(&now));
}

int Order::getNumber() const {
    return number;
}

void Order::setNumber(int number) {
    Order::number = number;
}

string Order::toString() {
    return "Order{ number: " + std::to_string(getNumber()) + ", dateTime: " + dateTime +  " }";
}

const string &Order::getDateTime() const {
    return dateTime;
}
