#include <iostream>

using namespace std;

int main(void)
{
    int num = 12;
    int *ptr = &num;
    int **dptr = &ptr; 
    //**는 이중 포인터로 다른 포인터를 가리키는 포인터를 의미함

    int &ref = num;
    int *(&pref) = ptr;
    int **(&dpref) = dptr;

    cout<<ref<<endl;
    cout<<*pref<<endl;
    cout<<**dpref<<endl;
    return 0;
}

/*
int main(void)
{
    int num1 = 1020;
    int &num2 = num1;

    num2 = 3047;
    cout<<"VAL: "<<num1<<endl;
    cout<<"REF: "<<num2<<endl;

    cout<<"VAL: "<<&num1<<endl;
    cout<<"REF: "<<&num2<<endl;
    return 0;
}
*/
/*
//배열요소도 참조자에 넣어서 사용 가능하다
int main(void)
{
    int arr[3] = {1,3,5};
    int &ref1 = arr[0];
    int &ref2 = arr[1];
    int &ref3 = arr[2];

    cout<<ref1<<endl;
    cout<<ref2<<endl;
    cout<<ref3<<endl;
    return 0;
}
*/