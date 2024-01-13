#include <iostream>

int main()
{
    int num = 42; // Declare and initialize a non-constant integer variable
    int *ptr = &num; // Create a pointer that points to the address of num

    std::cout << "Original value of num: " << num << std::endl;

    // Use the pointer to change the value of num
    *ptr = 100;

    std::cout << "Modified value of num: " << num << std::endl;

    return 0;
}
