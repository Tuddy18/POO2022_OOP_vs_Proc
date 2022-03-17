//
// Created by tuddy on 15-Mar-22.
//

#include "client.h"

Client::Client() {}

Client::Client(const string &name) : name(name) {}



const string &Client::getName() const {
    return name;
}

void Client::setName(const string &name) {
    Client::name = name;
}

/**
     * Orders a product from the shop
     * Consumes a product object to create an order
     * @param Product
     * @return
     */
Order Client::orderProduct(Product product) {
    cout << "Order is been processed...\n";

    // Processing
    Order order = Order();

    cout << "Order processed!" << endl;
    cout << "Order: " << order.toString() << endl;
    cout << "Client: " << this->toString() << endl;
    cout << "Product: " << product.toString() << endl;
    cout << endl;

    return order;
}

string Client::toString() {
    return "Client{ name: " + getName() + " }";
}

Client::~Client() {
    cout << "Client destroyed!";
}
