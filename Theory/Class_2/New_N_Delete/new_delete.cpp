/*
힙(Heap)은 동적 메모리 할당을 위해 프로그램이 사용하는 메모리 영역

new연산시 반환된 주소 값을 대상으로 delete연산을 실행
할당된 영ㅇ역이 배열의 구조라면 []를 추가
*/


#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

char * MakeStrAdr(int len)
{
    //아래의 코드는 C언어의 동적할당을 보이기 위한거임(malloc free)
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
