#include <iostream>

/**
 * main - Entry point of the program
 *
 * Description: This program demonstrates print variables
 *
 * Return 0 (Success)
 *
 */
int main(void)
{
    int age = 18;
    std::cout << "age (before): "
        << age << "\n";

        age = 25;
    std::cout << "age (after): "
        << age << "\n";

    return (0);

}
