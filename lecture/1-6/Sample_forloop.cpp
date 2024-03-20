#include <iostream>

int main()
{
    using namespace std;

    int numOfWatermelons = 0;
    int workingDays = 0;

    cout << "How many days do you work in a week?" << endl;
    cin >> workingDays;

    for (int i = 0; i < workingDays; i++)
    {
        numOfWatermelons++;
    }

    cout << "Now I have " << numOfWatermelons << " watermelons!" << endl;

    return 0;
}