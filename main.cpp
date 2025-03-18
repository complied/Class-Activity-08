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
    // Displaying customer details
    
    Customer customer;
    
    cout << "Whats your name?  " << endl;
    getline(cin, customer.name);
    cout << "Whats your age? " << endl;
    cin >> customer.age;
    cin.ignore(); //used for getline to noet get skipped
    cout << "What's your street address? " << endl;
    getline(cin, customer.address.street);  // Reads full street address

    cout << "Which city do you live in? " << endl; ;
    getline(cin, customer.address.city);  // Reads city name

    cout << "Enter your zip code: ";
    cin >> customer.address.zipCode;

    
    cout << "Their name is: " << customer.name << endl;
    cout << "Their Age: " << customer.age << endl;
    cout << "Their Address: "<< customer.address.city << ", " << customer.address.street << ", " << customer.address.zipCode << endl;

    return 0;
}



