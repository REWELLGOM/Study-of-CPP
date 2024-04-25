/*
    다시해봐 main과 point클래스 건들지말고 circle ring클래스가 이어지게 해서 도출하시오
*/

#include <iostream>
using namespace std;

class Point
{
private:
    int xpos, ypos;

public:
    void Init(int x,int y)
    {
        xpos = x;
        ypos = y;
    }
    void ShowPointInfo() const
    {
        cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;

    }

};


class Circle
{
private:
    Point xpos;
    Point ypos;
public:
    void Init()
    {

    }
};


class Ring
{
private:
    Circle OutRadius;
    Circle InRadius;
    int x,y,r,x2,y2,r2;
public:
    Circle Init(int x,int y,int r,int x2,int y2,int r2)
    {
        
    }

    void ShowRingInfo()
    {
        cout<<r2 - r<<endl;
    }
};

int main(void)
{
    Ring ring;
    ring.Init(1,1,4,2,2,9);
    ring.ShowRingInfo();
    return 0;
}