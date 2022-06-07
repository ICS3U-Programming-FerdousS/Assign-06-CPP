// Copyright (c) 2022 Ferdous Sediqi All rights reserved.
// Created by: Ferdous
// Created on: May 31. 2022
// In this program we ask user for a list of integers then using For each
// loop in a seprate it function find the even values inside the list.


#include <iostream>
// include list
#include <list>
#include <string>
using  std::string;

std::list<int> listOfEven;

// function to find even integers
std::list<int> FindEvenVal(std::list<int> listOfInt) {
    // using for each to find the even numbers
    for (int aNum : listOfInt) {
        if (aNum % 2 == 0) {
            listOfEven.push_back(aNum);
        }
    }
    return listOfEven;
}

int main() {
    // list
    std::list<int> listOfInt;
    std::list<int> evenNumbers;
    // variables
    string num_string;
    std::string continuePlay;
    int num_int;

    // using Do While loop to get user input and push it to list
    do {
        std::cout << "Enter your number into the list: ";
        std::cin >> num_string;

        // cast user input to string
        try {
            num_int = std::stoi(num_string);
            listOfInt.push_back(num_int);
            }
            // catch invalid input
        catch (std::invalid_argument) {
            std::cout <<"Invalid Input. Input was not an integer." << std::endl;
    }
    // ask user if they want to continue
    std::cout << "Enter y to continue or q to quit: ";
    std::cin >> continuePlay;
}
    // if yes, loop back
    while (continuePlay == "y");

    // call the function and display the new list
    FindEvenVal(listOfInt);

    // using for each to display the even values from the list    
    std::cout << "The even values of the list are: {";
    for (int &listOfElement : listOfEven) {
        std::cout << listOfElement << ", ";
    }
    std::cout << "}";
}
