/*
C언어에서 쓰던 라이브러리 사용법
*/
#include <cmath> //#include <math.h>
#include <cstdio> //#include <stdio.h>
#include <cstring> //#include <cstring>
using namespace std;

int main(void)
{
    char str1[] = "Result";
    char str2[30];

    strcpy(str2, str1);
    printf("%s: %f \n", str1, sin(0.14));
    printf("%s: %f \n", str2, abs(-1.25));
    return 0;
}