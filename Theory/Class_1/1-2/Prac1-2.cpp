//----------------------함수의 오버로딩

//C언어는 함수의 이름으로 찾는 반면 C++는 이름과 매개변수의 선언으로 찾아서 다름
//그래서 C++ 함수 오버로딩이 가능

#include <iostream>

void MyFunc(void)
{
	std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(char c)
{
	std::cout << "MyFunc(char c) called" << std::endl;
}

void MyFunc(int a, int b)
{
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main(void)
{
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);
	return 0;
}