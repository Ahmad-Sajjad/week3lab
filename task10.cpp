#include <iostream>
using namespace std;
main()
{
    string team;
    float wins, losses, draws, points;
    cout << "Enter the name of the cricket team: ";
    cin >> team;
    cout << "Enter the number of wins: ";
    cin >> wins;
    cout << "Enter the number of draws: ";
    cin >> draws;
    cout << "Enter the number of losses: ";
    cin >> losses;
    points = wins * 3 + draws;
                            cout
             << "Pakistan has obtained " << points << " points in the Asia Cup tournament.";
}