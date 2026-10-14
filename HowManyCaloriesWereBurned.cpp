// HowManyCaloriesWereBurned.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
    int minutes;
    int calories;

	cout << " How many minutes have you spent on the treadmill? " << endl;
    cin >> minutes;
    cout << endl;

    if (minutes <= 10)
    {
        calories = 42;
        cout << "You have burned this many calories!: " << calories << endl;
    }
    else if (minutes <= 15)
    {
        calories = 63;
        cout << "You have burned this many calories!: " << calories << endl;
    }
    else if (minutes <= 20)
    {
        calories = 84;
        cout << "You have burned this many calories!: " << calories << endl;
    }
    else if (minutes <= 25)
    {
        calories = 105;
        cout << "You have burned this many calories!: " << calories << endl;
    }
    else if (minutes <= 30)
    {
        calories = 126;
        cout << "You have burned this many calories!: " << calories << endl;
    }
}