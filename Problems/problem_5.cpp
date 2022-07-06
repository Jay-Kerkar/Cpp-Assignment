// Write a C++ program to print the sum of two numbers using a class

#include <iostream>
using namespace std;

class Sum
{
public:
    int sum_of_numbers(int *numbers, int total_numbers)
    {
        int sum_of_numbers = 0;
        for (int i = 0; i < total_numbers; i++)
        {
            sum_of_numbers = sum_of_numbers + numbers[i];
        }

        cout << "The sum of " << total_numbers << " numbers is :- " << sum_of_numbers;
        return 0;
    }
};

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

    Sum obj_1;
    obj_1.sum_of_numbers(numbers, total_numbers);

    return 0;
}