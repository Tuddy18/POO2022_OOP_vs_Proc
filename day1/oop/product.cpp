//
// Created by tuddy on 15-Mar-22.
//

#include "product.h"

Product::Product() {}

Product::Product(const string &name) : name(name) {}

const string &Product::getName() const {
    return name;
}

void Product::setName(const string &name) {
    Product::name = name;
}

string Product::toString() {
    return "Product{ name: " + getName() + " }";
}
