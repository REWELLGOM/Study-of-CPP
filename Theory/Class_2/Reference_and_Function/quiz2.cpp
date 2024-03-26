#include <iostream>

using namespace std;

int SwapPointer(&ptr1, &ptr2)
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