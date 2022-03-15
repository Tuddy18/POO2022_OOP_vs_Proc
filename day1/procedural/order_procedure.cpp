//
// Created by tuddy on 15-Mar-22.
//

#include "order_procedure.h"

int orderIndex = 100;

/**
 * Orders a product from the shop and returns a receipt number
 * @param clientName the client name
 * @param productName the product name
 * @return receipt number
 */
int orderProductProcedure(string clientName, string productName){
    orderIndex++;

    cout << "Order is been processed..\n";
    // Processing
    cout << "Order processed!" << endl;
    cout << "Order number: " << orderIndex << endl;
    cout << "Client name: " << clientName << endl;
    cout << "Product name: " << productName << endl;
    cout << endl;


    return orderIndex;
}
