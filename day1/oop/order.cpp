//
// Created by tuddy on 15-Mar-22.
//

#include "order.h"

int Order::orderIndex = 200;

Order::Order() {
    orderIndex++;
    number = orderIndex;
}

int Order::getNumber() const {
    return number;
}

void Order::setNumber(int number) {
    Order::number = number;
}

string Order::toString() {
    return "Order{ number: " + std::to_string(getNumber()) + " }";
}
