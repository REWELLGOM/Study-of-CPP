#include <iostream>
using namespace std;

namespace MakeTree
{
    void Func();
}

void MakeTree::Func()
{
    int height = 0;
    int width = 0;

    cout<<"높이를 정해주세요 => "; 
    cin>>height;

    cout<<"넓이를 홀수로 정해주세요 => ";
    cin>>width;

    if(width%2 == 0)
    {
        width = width+1;
    }
    for(int i = 1; i<=height; i++)
    {
        for(int j = 1; j <= width ; j++)
        {
            if(width/2+1 != i)
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
    }


    if(height<2)
    {
        cout<<"나가 이자식아!";
    }

}
int main()
{
    int width = 0;
    int height = 0;
    int count = 0;
    int num = 0;
    int YN = 0;

    cout<<"Do you want to make tree?(1/0) = ";
    cin>>YN;;

    if(YN = 1)
    {
        MakeTree::Func();
    }

}