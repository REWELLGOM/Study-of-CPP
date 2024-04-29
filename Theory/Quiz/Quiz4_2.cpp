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


int main(void)
{
    Ring ring;
    ring.Init(1,1,4,2,2,9); //여기 코드 자알 생각해봐
    ring.ShowRingInfo();
    return 0;
}