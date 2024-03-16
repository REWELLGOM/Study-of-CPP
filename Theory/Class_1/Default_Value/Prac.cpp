#include <iostream>

//---------------------------------------------------------------------------------------------
// 부분 디폴트값을 할때 오른쪽에 있는 매개변수는 항상 채워져야한다. 
//int Adder(int num1 = 1, int num2 = 2)
//{
//	return num1 + num2;
//}
//
//int main(void)
//{
//	std::cout << Adder() << std::endl;
//	std::cout << Adder(5) << std::endl; //num1=5가 되고 num2는 기본값인 2로 받게되어 adder에서 7을 리턴받는다
//	std::cout << Adder(3, 5) << std::endl;
//	return 0;
//}

int BoxVolume(int length, int width = 1, int height = 1); //함수를 정의하는 코드! 여기 값들이 디폴트가 된다

int main(void)
{
	std::cout << "[3,3,3] : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5,5,D] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7,D,D] : " << BoxVolume(7) << std::endl;
	//std::cout << "[D,D,D] : " << BoxVolume() << std::endl; 디폴트가 없는것에 디폴트를 요구해서 에러남
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}