// Copyright (c) 2020 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on November 27 2020
// this program calculates numbers inserted by user

#include <iostream>

int main() {
    // this program calculates numbers inserted by user
    float first_number;
    float second_number;
    float total;


    // input
    std::cout << "Enter the first number:";
    std::cin >> first_number;
    std::cout << "Enter the second number:";
    std::cin >> second_number;


    // process
    total = first_number + second_number;


    // output
    std::cout << "" << std::endl;
    std::cout << first_number << " + " << second_number
              << " = " << total << std::endl;
}
