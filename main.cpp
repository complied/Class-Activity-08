//
//  main.cpp
//  Class Activity 08 - Struct
//
//  Created by Subigya Parajuli on 3/17/25.
//

#include <iostream>
using namespace std;

// Defining a structure to store an address
struct Address {
    string street;  // Stores the street name
    string city;    // Stores the city name
    int zipCode;    // Stores the zip code
};

// Defining a structure to store customer details
struct Customer {
    string name;    // Stores the customer's name
    int age;        // Stores the customer's age
    Address address; // Stores the customer's address using the Address struct
};

int main() {
    // Initializing a Customer object with values
    Customer customer = {
        "Jordan Carter",  // Assigning name
        18,                  // Assigning age
        {"123 balh blah st", "Berkeley", 94707} // Assigning address (street, city, zip code)
    };

    // Displaying customer details
    cout << "The Customer Name: " << customer.name << endl;
    cout << "Their Age: " << customer.age << endl;
    cout << "Their Address: " << customer.address.street << ", "
         << customer.address.city << ", " << customer.address.zipCode << endl;

    return 0;
}
