#include "AdressStruct.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

bool isValidName(const string& str) { //helper function to validate string
    if (str.empty()) return false;
    for (char c : str) {
        if (!isalpha(c) && c != ' ') {
            return false;
        }
    }
    return true;
}

// Function to get customer information from user input
void getCustomerInfo(Customer& customer) {
    cout << "What's your name: ";
    getline(cin, customer.name);
    while (!isValidName(customer.name)) {
        cout << "Name must contain only letters and spaces. Try again: ";
        getline(cin, customer.name);
    }
    
    cout << "What's your age: ";
    while(!(cin >> customer.age)) {
        cin.clear(); // clearning the error
        cin.ignore(10000, '\n'); //rejects input
        cout << "Invalid input. Age must be a number. Try again: ";
    }
    cin.ignore(); // used for getline to not get skipped
    
    cout << "What's your street address: ";
    getline(cin, customer.address.street);  // Reads full street address
    while (customer.address.street.empty()) {
        cout << "Address cannot be empty. Try again: ";
        getline(cin, customer.address.street);
    }

    cout << "Which city do you live in: ";
    getline(cin, customer.address.city);  // Reads city name
    while (!isValidName(customer.address.city)) {
        cout << "Invalid input. City must contain only letters and spaces. Try again: ";
        getline(cin, customer.address.city);
    }

    cout << "Enter your zip code: ";
    while(!(cin >> customer.address.zipCode)) {
        cin.clear(); //clearing error
        cin.ignore(10000, '\n'); // rejects input
        cout << "Invalid input. Zip code must be a number. Try again: ";
    }
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
