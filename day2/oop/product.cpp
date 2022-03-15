//
// Created by tuddy on 15-Mar-22.
//

#include "product.h"

Product::Product() {}

Product::Product(const string &name) : name(name) {}

Product::Product(const string &name, const string &brandName) : name(name), brandName(brandName) {}

const string &Product::getName() const {
    return name;
}

void Product::setName(const string &name) {
    Product::name = name;
}

const string &Product::getBrandName() const {
    return brandName;
}

void Product::setBrandName(const string &brandName) {
    Product::brandName = brandName;
}

string Product::toString() {
    return "Product{ name: " + getName() + ", brand: " + getBrandName() + " }";
}
