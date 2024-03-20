#include <iostream>

int main()
{
    using namespace std;

    int carrots = 10;

    cin>>carrots;
    if (carrots <5)
    {
        cout <<"Let's buy some carrots!"<<endl;
    }
    else if(carrots < 10)
    {
        cout<<"Maybe... enough?"<<endl;
    }
    else if(carrots >10)
    {
        cout<<"enough!"<<endl;
    }
}