#include <iostream>

int main()
{
    using namespace std;

    int floor = 3;
    int rooms = 4;
    int i, j;

    for (i = 0; i < floor; i++)
    {
        cout << "Floor: " << i << endl;
        for (j = 0; j < rooms; j++)
        {
            cout << "Room number: " << 100 * (i + 1) + (j + 1) << endl;
        }
    }

    return 0;
}