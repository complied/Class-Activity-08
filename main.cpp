//
//  main.cpp
//  Class Activity 08 - Struct
//
//  Created by Subigya Parajuli on 3/17/25.
//

#include "AdressStruct.hpp"
using namespace std;

int main() {
    // creating customer object
    Customer customer;
    
    // now getting customer information from user
    getCustomerInfo(customer);
    
    // now displaying customer information
    displayCustomerInfo(customer);

    return 0;
}
