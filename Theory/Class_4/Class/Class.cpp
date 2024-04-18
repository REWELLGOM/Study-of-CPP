/*
클래스의 동작을 보기위한 코드다
*/
#include <iostream>
using namespace std;

class Point
{
public:
    int x;
    int y;
};

class Rectangle
{
public:
    Point upleft;
    Point lowRight;

public:
    void ShowRecInfo()
    {
        cout<<"좌 상단: "<<'['<<upleft.x<<", ";
        cout<<upleft.y<<']'<<endl;
        cout<<"우 하단: "<<'['<<lowRight.x<<", ";
        cout<<lowRight.y<<']'<<endl<<endl;
    }
};

int main(void)
{
    //멤버 변수가 public으로 선언되면 초기화 할수있다
    Point pos1 = {-2, 4};
    Point pos2 = {5, 6};
    Rectangle rec = {pos2, pos1};
    rec.ShowRecInfo();
    return 0;
}
