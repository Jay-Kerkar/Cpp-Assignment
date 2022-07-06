// Write a C++ program to print the sum of the numbers entered by the user using also use a parametrized function

#include <iostream>
using namespace std;

int sum(int *numbers, int total_numbers)
{
    int sum_of_numbers = 0;

    for (int i = 0; i < total_numbers; i++)
    {
        sum_of_numbers = sum_of_numbers + numbers[i];
    }

    return sum_of_numbers;
}

int main()
{
    int total_numbers;
    cout << "Enter the total numbers of which the sum is to be find" << endl;
    cin >> total_numbers;

    int numbers[total_numbers];
    for (int i = 0; i < total_numbers; i++)
    {
        cout << "Enter the number " << i + 1 << " :- " << endl;
        cin >> numbers[i];
    }

    int sum_of_numbers = sum(numbers, total_numbers);
    cout << "The sum of " << total_numbers << " numbers is :- " << sum_of_numbers;
    return 0;
}