/*
    엑세스함수
    get, set을 이용하여 멤버변수를 private으로 선언하고 클래스 외부에서의 접근을 목적으로 함
    함수는 정의되었으되 호출되지 않는 경우가 많다.

*/


#include "Point.h"
#include <iostream>
using namespace std;

bool Point::InitMembers(int xpos, int ypos)
{
    if(xpos < 0 || ypos < 0)
    {
        cout<<"벗어난 범위의 값 전달"<<endl;
        return false;
    }

    x = xpos;
    y = ypos;
    return true;
}

//const함수
int Point::GetX() const
{
    return x;
}

int Point::GetY() const
{
    return y;
}

bool Point::SetX(int xpos)
{
    if(0 > xpos || xpos > 100)
    {
        cout<<"벗어난 범위의 값 전달"<<endl;
        return false;
    }
    x = xpos;
    return true;
}
bool Point::SetY(int ypos)
{
    if(0 > ypos || ypos > 100)
    {
        cout<<"벗어난 범위의 값 전달"<<endl;
        return false;
    }
    y = ypos;
    return true;
}