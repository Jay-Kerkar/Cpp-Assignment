// Write a C++ program to print the sum of two numbers using a parametrized function

#include <iostream>
using namespace std;

int sum(int, int);

int main()
{
    int num_1, num_2;

    cout << "Enter the first number :- " << endl;
    cin >> num_1;

    cout << "Enter the second number :- " << endl;
    cin >> num_2;

    int sum_of_numbers = sum(num_1, num_2);
    cout << "The sum of two numbers is :- " << sum_of_numbers;
    return 0;
}

int sum(int number_1, int number_2)
{
    int sum_of_numbers = number_1 + number_2;
    return sum_of_numbers;
}