#include <iostream>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the sizes of data types
 *
 * Return: Always 0 (Success)
 *
 */
int main(void) {

    std::cout << "size of int: " << sizeof(int) << "bytes, " << sizeof(int) * 8 << "bits\n";
    std::cout << "size of double: " << sizeof(double) << "bytes, " << sizeof(double) * 8 << "bits\n";
    std::cout << "size of float: " << sizeof(float) << "bytes, " << sizeof(float) * 8 << "bits\n";
    std::cout << "size of char: " << sizeof(char) << "bytes, " << sizeof(char) * 8 << "bits\n";
    std::cout << "size of bool: " << sizeof(bool) << "bytes, " << sizeof(bool) * 8 << "bits\n";

    return (0);

}
