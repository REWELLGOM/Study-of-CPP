#include <iostream>
using namespace std;

class Person
{
private:
    string m_name;

public:
    Person(string name)
    {
        m_name = name;
    }
    string getUserName()
    {
        return m_name;
    }
};

class Board
{
private:
    int m_board[3][3];

public:
    Board()
    {
        doInitialise();
    }
    ~Board()
    {
    }

    void doInitialise()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                m_board[i][j] = 0;
            }
        }
    }

    void showCurrentBoard()
    {
        for (int i = 0; i < 5; i++)
        {
            if (i % 2 == 1)
            {
                cout << "-------";
            }
            else
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j % 2 == 1)
                    {
                        cout << "|\t";
                    }
                    else
                    {
                        cout << m_board[i / 2][j / 2] << "\t";
                    }
                }
            }
            cout << endl;
        }
    }
};

int main()
{
    Board *b = new Board();
    b->showCurrentBoard();
    return 0;
}