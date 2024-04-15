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
        //pos2에 박아넣은 값중에서 xpos ypos 값 추출해서 더하기
        xpos += pos.xpos;
        ypos += pos.ypos;
        return ;
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
    //각각 xpos ypos에 값 넣기

    pos1.MovePos(-7, 10);
    //Vector구조체에 pos1을 집어넣음 그와동시에 MovePos로 값 깎기
    pos1.ShowPosition();

    pos1.AddPoint(pos2);
    pos1.ShowPosition();
    return 0;
}
