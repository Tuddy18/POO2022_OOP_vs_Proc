//
// Created by tuddy on 15-Mar-22.
//

#ifndef LAB4_OOP_EXAMPLE_ORDER_H
#define LAB4_OOP_EXAMPLE_ORDER_H

#include <string>
using namespace std;

class Order{
private:
    int number;

    string dateTime;

public:
    static int orderIndex;

    Order();

    int getNumber() const;

    void setNumber(int number);

    const string &getDateTime() const;

    string toString();
};


#endif //LAB4_OOP_EXAMPLE_ORDER_H
