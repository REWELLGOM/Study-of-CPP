/*
#include <iostream>

using namespace std;

int SwapPointer(&ptr1, &ptr2) // 포인터를 매개변수로 받아야 하므로, 타입 뒤에 *를 추가하고 반환 타입을 void로 변경해야함
{
    int num1 = ptr1;
    ptr1 = ptr2;
    ptr2 = num1;
}

int main(void)
{
    int num1 = 5;
    int *ptr1 = &num1;
    int num2 = 10;
    int *ptr2 = &num2;

    SwapPointer(*ptr1, *ptr2)
}
*/

#include <iostream>

using namespace std;


void SwapPointer(int* &ptr1, int* &ptr2)
{
    int* temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
}

int main(void)
{
    int num1 = 5;
    int *ptr1 = &num1;
    int num2 = 10;
    int *ptr2 = &num2;

    SwapPointer(ptr1, ptr2);

    // 결과 확인을 위한 출력
    cout << "ptr1 가리키는 값: " << *ptr1 << ", ptr2 가리키는 값: " << *ptr2 << endl;
}