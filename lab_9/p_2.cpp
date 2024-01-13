#include <iostream>
#include <cmath> // Include the cmath library for mathematical functions

// Function prototype to calculate the diameter
double calculateDiameter(double radius);

// Function prototype to calculate the circumference
double calculateCircumference(double radius);

// Function prototype to calculate the area
double calculateArea(double radius);

int main() {
    double radius;

    // Prompt the user to enter the radius of the circle
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Call the calculateDiameter function and store the result in a variable
    double diameter = calculateDiameter(radius);

    // Call the calculateCircumference function and store the result in a variable
    double circumference = calculateCircumference(radius);

    // Call the calculateArea function and store the result in a variable
    double area = calculateArea(radius);

    // Display the calculated values
    std::cout << "Diameter: " << diameter << std::endl;
    std::cout << "Circumference: " << circumference << std::endl;
    std::cout << "Area: " << area << std::endl;

    return 0; // Exit the program with success
}

// Function definition to calculate the diameter
double calculateDiameter(double radius) {
    return 2.0 * radius; // Diameter = 2 * radius
}

// Function definition to calculate the circumference
double calculateCircumference(double radius) {
    return 2.0 * M_PI * radius; // Circumference = 2 * π * radius (using the constant M_PI from cmath)
}

// Function definition to calculate the area
double calculateArea(double radius) {
    return M_PI * radius * radius; // Area = π * radius^2
}
