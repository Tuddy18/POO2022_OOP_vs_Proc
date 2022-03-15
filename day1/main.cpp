#include <iostream>
#include "procedural/order_procedure.h"
#include "oop/product.h"
#include "oop/client.h"

int main() {

    // Procedural
//    int dorelOrderNo = orderProductProcedure("Dorel", "Aspirator");
    int dorelOrderNo = orderProductProcedure("Dorel", "Aspirator");

    cout << "Dorel: \'Cool! I got the order number: " << dorelOrderNo << "\'\n\n";

    // OOP
    Product tv("TV");
    Client petrutz("Petrutz");

    Order petrutzOrder = petrutz.orderProduct(tv);
    cout << "Petrutz: \'Nice! I got the order number: " << petrutzOrder.getNumber() << " for my new TV!\'\n";


    return 0;
}
