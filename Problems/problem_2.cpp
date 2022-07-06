// Write a C++ program to print the sum of two numbers using a function

#include <iostream>
using namespace std;

int sum(void);

int main()
{
    int sum_of_numbers = sum();
    cout << "The sum of two numbers is :- " << sum_of_numbers;
    return 0;
}

int sum(void)
{
    int number_1 = 10;
    int number_2 = 20;
    int sum_of_numbers = number_1 + number_2;

    return sum_of_numbers;
}