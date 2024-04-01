//힙(Heap)은 동적 메모리 할당을 위해 프로그램이 사용하는 메모리 영역

/*
아래의 주석 처리가된 코드는 C언어의 동적할당을 보이기 위한거임

단점
할당할 대상의 정보를 무조건 바이트 크기단위로 전달해야함
반환형이 void형 포인터이기 때문에 적절한 형 변환을 거쳐야 함
*/


#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

char * MakeStrAdr(int len)
{
    //char* str = (char*)malloc(sizeof(char)*len);
    char* str = new char[len];
    return str;
}

int main(void)
{
    char* str = MakeStrAdr(20);
    strcpy(str, "I am so happy");
    cout<<str<<endl;
    //free(str);
    delete []str;
    return 0;
}
