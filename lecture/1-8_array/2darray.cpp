#include <iostream>

int main()
{
    using namespace std;

    const int row = 5;
    const int col = 5;
    int counter = 0;
    int map[row][col] = {0};

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            map[i][j] = counter++;
            cout << map[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}