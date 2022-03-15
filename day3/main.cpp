#include <iostream>
#include "procedural/order_procedure.h"
#include "oop/product.h"
#include "oop/client.h"

int main() {

    // Procedural
//    int dorelOrderNo = orderProductProcedure("Dorel", "Aspirator");
    string dorelOrderTime;
    int dorelOrderNo = orderProductProcedure("Dorel", "Aspirator", "Samsung", dorelOrderTime);

    cout << "Dorel: \'Cool! I got the order number: " << dorelOrderNo << " placed on: " + dorelOrderTime + "\'\n\n";

    // OOP
    Product tv("TV", "Phillips");
    Client petrutz("Petrutz");

    Order petrutzOrder = petrutz.orderProduct(tv);
    cout << "Petrutz: \'Nice! I got the order: " << petrutzOrder.toString() << " for my new TV!\'\n";


    return 0;
}
