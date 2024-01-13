#include <iostream>

int main()
{
    // Declare two integer variables
    int num1, num2;

    // Prompt the user to enter the first number
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    // Prompt the user to enter the second number
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Declare two integer pointers
    int* ptr1 = &num1;
    int* ptr2 = &num2;

    // Add the two numbers using pointers and store the result in a variable
    int sum = *ptr1 + *ptr2;

    // Display the result
    std::cout << "The sum of " << *ptr1 << " and " << *ptr2 << " is: " << sum << std::endl;

    return 0; // Exit the program with success
}
