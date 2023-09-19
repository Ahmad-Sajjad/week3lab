#include <iostream>
using namespace std;
main()
{
    int age, ageindays;
    cout << "Enter your age in years: ";
    cin >> age;
    ageindays = age * 365;
    cout << "Your age in days is approximately " << ageindays << " days.";
}