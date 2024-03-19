#include <iostream>

int main(void)
{
    int year = 0;
    int month = 0;
    int day = 0;
    using namespace std;

    cout<<"몇년도에 태어나셨나요? ";
    cin>>year;
    cout<<"몇월에 태어나셨나요? ";
    cin>>month;
    cout<<"며칠에 태어나셨나요? ";
    cin>>day;
    cout<<year<<"년 "<<month<<"월 "<<day<<"일 생이군요!";
}