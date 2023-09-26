// Copyright (c) 2021 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Sept/26/2023
// This program asks the user for the length
// and width of a rectangle. It will then
// calculates and displays the area and perimeter.
#include <iostream>

// Input.
// Declaring variables.
float length, width, area, perimeter;

int main() {
    // Get user input.
    // Explaining my program to the user.
    std::cout << "My program will calculate the area and\n";
    std::cout << "perimeter of a rectangle.\n";
    std::cout << "Enter the length (cm): ";
    std::cin >> length;
    std::cout << "Enter the width (cm): ";
    std::cin >> width;

    // Process.
    // Calculate area and perimeter of rectangle.
    area = length * width;
    perimeter = 2 * (length + width);

    // Output.
    // Display the results back to the user.
    std::cout << std::endl;
    std::cout << "Area = " << area << "cm.\n";
    std::cout << "Perimeter = " << perimeter << "cm.\n";
}
