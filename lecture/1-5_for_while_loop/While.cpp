#include <iostream>

int main()
{
    using namespace std;

    int counter = 0;

    cout << "Enter counter: " << endl;
    cin >> counter;

    int i = 0;
    while (i < counter)
    {
        cout << "Counting... " << i + 1 << endl;
        i++;
    }

    cout << "End" << endl;
    return 0;
}