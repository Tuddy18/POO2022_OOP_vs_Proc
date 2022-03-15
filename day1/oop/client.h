//
// Created by tuddy on 15-Mar-22.
//

#ifndef LAB4_OOP_EXAMPLE_CLIENT_H
#define LAB4_OOP_EXAMPLE_CLIENT_H

#include <iostream>
#include <string>
#include "product.h"
#include "order.h"

using namespace std;

class Client{
private:
    string name;

public:
    Client();

    Client(const string &name);

    /**
     * Orders a product from the shop
     * Consumes a product object to create an order
     * @param Product
     * @return
     */
    Order orderProduct(Product Product);

    const string &getName() const;

    void setName(const string &name);

    string toString();
};

#endif //LAB4_OOP_EXAMPLE_CLIENT_H
