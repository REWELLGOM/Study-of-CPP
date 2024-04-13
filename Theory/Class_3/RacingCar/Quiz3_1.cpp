#include <iostream>
using namespace std;

struct Vector
{
    int xpos;
    int ypos;

    void MovePos(int x, int y)
    {
        xpos += x;
        ypos += y;

        return ;
    }

    void AddPoint(const Vector &pos)
    {
        ;
    }

    void ShowPosition()
    {
        cout<<"x좌표: "<<xpos<<endl;
        cout<<"y좌표: "<<ypos<<endl;
        cout<<" "<<endl;
    }
};

int main ()
{
    Vector pos1 = {12, 4};
    Vector pos2 = {20, 30};

    pos1.MovePos(-7, 10);
    pos1.ShowPosition();

    pos1.AddPoint(pos2);
    pos1.ShowPosition();
    return 0;
}
