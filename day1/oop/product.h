//
// Created by tuddy on 15-Mar-22.
//

#ifndef LAB4_OOP_EXAMPLE_PRODUCT_H
#define LAB4_OOP_EXAMPLE_PRODUCT_H

#include <string>
using namespace std;

class Product{
private:
    string name;

public:
    Product();

    Product(const string &name);

    const string &getName() const;

    void setName(const string &name);

    string toString();
};

#endif //LAB4_OOP_EXAMPLE_PRODUCT_H
