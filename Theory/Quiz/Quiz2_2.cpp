#include <iostream>
using namespace std;

int main()
{
    // const int Num = 12;
    // const int* Pnum = &Num;
    // const int& RefPnum = *Pnum;

    int Num = 12;
    int* Pnum = &Num;
    int& RefPnum = *Pnum;
    *Pnum = 0;
    cout<< RefPnum<<" "<<*Pnum;
}