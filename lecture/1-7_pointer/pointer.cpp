#include <iostream>

int main()
{
    using namespace std;

    int watermelons = 10;
    int *p_watermelonBox = &watermelons; // 포인터 변수를 선언 변수의 주소를 가져옴 * , &는 세트임
    //*p_watermelonBox = &watermelons 포인터 변수의 값을 가져오라는 말임 이 코드는 틀린거임

    cout << "watermelons: " << watermelons << endl;
    cout << "watermelons in p_watermelonBox " << *p_watermelonBox << endl;

    cout << "watermelons location: " << &watermelons << endl;
    cout << "p_watermelonBox value: " << p_watermelonBox << endl;

    *p_watermelonBox = *p_watermelonBox + 1;
    cout << "Now I have " << watermelons << endl; // 주소가 같아서
}