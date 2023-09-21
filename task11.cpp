#include <iostream>
using namespace std;
main()
{
    long int current,monthly,total;
    cout << "Enter the current world population: ";
    cin >> current;
    cout << "Enter the monthly birth rate (number of births per month): ";
    cin>>monthly;
    total = (30 * 12 * monthly) + current;
    cout<<"The population in three decades will be: "<<total;
}
