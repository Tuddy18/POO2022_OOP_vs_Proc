//
// Created by tuddy on 15-Mar-22.
//

#include "order_procedure.h"

int orderIndex = 100;

/**
 * Orders a product from the shop and returns a receipt number
 * @param clientName the client name
 * @param productName the product name
 * @param brandName the brand name
 * @return receipt number
 */
int orderProductProcedure(string clientName, string productName, string brandName, string& dateTime){
    orderIndex++;

    cout << "Order is been processed..\n";
    // Processing
    // current date and time on the current system
    time_t now = time(0);
    // convert now to string form
    dateTime = string(ctime(&now));

    cout << "Order processed!" << endl;
    cout << "Order number: " << orderIndex << endl;
    cout << "Order time: " << dateTime << endl;

    cout << "Client name: " << clientName << endl;
    cout << "Product name: " << productName << endl;
    cout << "Brand name: " << brandName << endl;

    cout << endl;


    return orderIndex;
}

