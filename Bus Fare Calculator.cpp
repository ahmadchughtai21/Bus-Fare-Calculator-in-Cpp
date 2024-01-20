#include <iostream>
using namespace std;

int main()
{
    int num;
    float fare, tot;

    cout << "Enter Total Number of Passengers ; ";
    cin >> num;
    cout << "Enter Fare Per Person ; ";
    cin >> fare;

    tot = num * fare;

    cout << "The total cash collected from bus is : " << tot;

    return 0;
}