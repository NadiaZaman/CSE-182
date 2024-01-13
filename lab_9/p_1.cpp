#include <iostream>

// Function prototype for addition (No Argument Passed and No return value)
void add();

// Function prototype for subtraction (No Argument Passed but return a value)
int subtract();

// Function prototype for multiplication (Argument Passed but no return value)
void multiply(int num1, int num2);

// Function prototype for division (Argument passed and returns a value)
double divide(int num1, int num2);

int main() {
    int num1, num2;

    std::cout << "Enter two integers:" << std::endl;
    std::cin >> num1 >> num2;

    // Call the addition function (No Argument Passed and No return value)
    add();

    // Call the subtraction function (No Argument Passed but return a value)
    int result_subtract = subtract();
    std::cout << "Subtraction result: " << result_subtract << std::endl;

    // Call the multiplication function (Argument Passed but no return value)
    multiply(num1, num2);

    // Call the division function (Argument passed and returns a value)
    double result_divide = divide(num1, num2);
    std::cout << "Division result: " << result_divide << std::endl;

    return 0;
}

// Function definition for addition (No Argument Passed and No return value)
void add() {
    int num1, num2;
    std::cout << "Enter two integers for addition:" << std::endl;
    std::cin >> num1 >> num2;
    int sum = num1 + num2;
    std::cout << "Addition result: " << sum << std::endl;
}

// Function definition for subtraction (No Argument Passed but return a value)
int subtract() {
    int num1, num2;
    std::cout << "Enter two integers for subtraction:" << std::endl;
    std::cin >> num1 >> num2;
    int difference = num1 - num2;
    return difference;
}

// Function definition for multiplication (Argument Passed but no return value)
void multiply(int num1, int num2) {
    int product = num1 * num2;
    std::cout << "Multiplication result: " << product << std::endl;
}

// Function definition for division (Argument passed and returns a value)
double divide(int num1, int num2) {
    if (num2 == 0) {
        std::cerr << "Error: Division by zero is not allowed." << std::endl;
        exit(1);
    }
    double quotient = static_cast<double>(num1) / num2;
    return quotient;
}
