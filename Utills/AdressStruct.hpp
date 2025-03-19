// AdressStruct.hpp
// Header file for Address and Customer structures

#ifndef ADDRESS_STRUCT_HPP
#define ADDRESS_STRUCT_HPP

#include <string>
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

// Function declarations
void getCustomerInfo(Customer& customer);
void displayCustomerInfo(const Customer& customer);

#endif // ADDRESS_STRUCT_HPP
