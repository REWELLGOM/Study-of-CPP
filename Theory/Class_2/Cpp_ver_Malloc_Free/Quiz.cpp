#include <iostream>
#include <string.h>
using namespace std;

typedef struct __point
{
    int xpos;
    int ypos;

public:
    float PntAdder(const float *p1, const float *p2)
    {
        float result = 0;
        result = *p1 + *p2;
        cout<<result;
        return result;
    }

} Point;

int main (void)
{
    int p1 = 0;
    int p2 = 0;

    cout<<"p1: ";
    cin>>p1;
    cout<<"p2: ";
    cin>>p2;
    Point& PntAdder(const Point &p1, const Point &p2);
}