#include "AdressStruct.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

// Function to get customer information from user input
void getCustomerInfo(Customer& customer) {
    cout << "What's your name: ";
    getline(cin, customer.name);
    
    cout << "What's your age: ";
    cin >> customer.age;
    cin.ignore(); // used for getline to not get skipped
    
    cout << "What's your street address: ";
    getline(cin, customer.address.street);  // Reads full street address

    cout << "Which city do you live in: ";
    getline(cin, customer.address.city);  // Reads city name

    cout << "Enter your zip code: ";
    cin >> customer.address.zipCode;
}

// customer information being displayed
void displayCustomerInfo(const Customer& customer) {
    cout << setfill('=') << setw(30) << " " << endl;
    cout << "RESULTS" << endl;
    cout << setfill('=') << setw(30) << " " << endl;
    cout << "Their name is: " << customer.name << endl;
    cout << "Their Age: " << customer.age << endl;
    cout << "Their Address: " << customer.address.city << ", " << customer.address.street << ", " << customer.address.zipCode << endl;
}
