/*
new와 malloc은 동작 방식이 다르다
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

class Simple
{
public:
    Simple()
    {
        cout<<"I'm simple constructor"<<endl;
    }
};

int main(void)
{
    cout<<"case 1: ";
    Simple *sp1 = new Simple;
    //new연산자를 이용해서 힙영역에 변수를 할당


    cout<<"case2: ";
    Simple *sp2 = (Simple*)malloc(sizeof(Simple)*1);
    //malloc 함수호출을 통해서 힙 영역에 변수를 할당
    cout<<" "<<endl;
    
    delete sp1;
    free(sp2);
    return 0;
}