/*
종료 기능
누구의 턴인지
*/
#include <iostream>
using namespace std;

class Player
{
private:
    string m_name;

public:
    Player(string name)
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
    int m_numOfProcess;

    // 기본세팅
    char convertNumberToDx(int value)

    {
        if (value == 0)
        {
            return ' ';
        }
        else if (value == 1)
        {
            return 'O';
        }
        else if (value == -1)
        {
            return 'X';
        }
        else
        {
            cout << "Wrong Command" << endl;
            return 'N';
        }
    }

    // return 1 -> findWinner
    // return 0 -> again
    int didFindWinner()
    {
        // find row
        for (int i = 0; i < 3; i++)
        {
            if (m_board[i][0] != 0 && m_board[i][0] == m_board[i][1] && m_board[i][1] == m_board[i][2])
            {
                return 1;
            }
        }

        // find column
        for (int i = 0; i < 3; i++)
        {
            if (m_board[0][i] != 0 && m_board[0][i] == m_board[1][i] && m_board[1][i] == m_board[2][i])
            {
                return 1;
            }
        }

        // find cross
        if (m_board[0][0] != 0 &&
            m_board[0][0] == m_board[1][1] &&
            m_board[1][1] == m_board[2][2])
        {
            return 1;
        }

        // find cross2
        if (m_board[2][0] != 0 &&
            m_board[2][0] == m_board[1][1] &&
            m_board[1][1] == m_board[0][2])
        {
            return 1;
        }

        // no winner
        return 0;
    }

public:
    Board()
    {
        doInitialise();
    }
    ~Board()
    {
    }

    // 초기화
    void doInitialise()
    {
        m_numOfProcess = 0;
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
                cout << "----------------------------------";
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
                        // cout << m_board[i / 2][j / 2] << "\t";
                        cout << convertNumberToDx(m_board[i / 2][j / 2]) << "\t";
                    }
                }
            }
            cout << endl;
        }
    }

    int updateBoard(int x, int y)
    {

        // 인덱스 검사
        if (x < 0 || x >= 3 || y < 0 || y > 3)
        {
            cout << "Invalid index: " << x << ", " << y << endl;
            return -1;
        }

        if (m_board[x][y] == 1 || m_board[x][y] == -1)
        {
            cout << "Invalid index: " << x << ", " << y << endl;
            return -1;
        }

        if (m_numOfProcess % 2 == 0)
        {
            m_board[x][y] = 1;
        }
        else
        {
            m_board[x][y] = -1;
        }

        if (didFindWinner() == 1)
        {
            return 1;
        }
        m_numOfProcess++;
        return 0;
    }
};

class Contorller
{
private:
    Board *board;
    Player *p1;
    Player *p2;

public:
    Contorller()
    {
        doInitialise();
    }
    // 소멸자
    ~Contorller()
    {
        delete board;
        delete p1;
        delete p2;
    }

    void doInitialise()
    {
        string name1;
        string name2;
        cout << "Enter 1P Name" << endl;
        cin >> name1;

        cout << "Enter 2P Name" << endl;
        cin >> name2;

        board = new Board();
        p1 = new Player(name1);
        p2 = new Player(name2);
    }

    void startPlay()
    {
        int x, y, ret = 0;
        int count = 0;
        while (true)
        {
            board->showCurrentBoard();
            cout << "Enter Ur Location" << endl;
            cin >> x >> y;

            ret = board->updateBoard(x, y);

            //이겼을 경우
            if (ret == 1)
            {
                cout << "CONGRATURATION!" << endl;
                break;
            }

            //비길 경우
            if (ret != -1)
            {
                count++;
                if (count >= 9)
                {
                    cout << "Draw Try Again" << endl;
                    board->doInitialise();
                    count = 0;
                }
            }
        }
    }
};

int main()
{
    Contorller *controller = new Contorller();
    controller->startPlay();
    return 0;
}