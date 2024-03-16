#include <iostream> //std cout endl등을 쓰기위한 

int main(void)
{
	//int num = 20;
	//std::cout << "Hello World!" << std :: endl; //<< <<사이에는 무엇을 출력할지  쓰기 endl 줄바꾸기
	//std::cout << "Hello" << "World!" << std::endl;
	//std::cout << num << ' ' << 'A'; //''사이에 아무것도 안쓰면 안되고 공백이면 공백을 넣어야함
	//std::cout << ' ' << 3.14 << std::endl;

	//------------------------------------printf scanf------------------------------------------------
	//int val1;
	//std::cout << "첫 번째 숫자입력: "; //printf
	//std::cin >> val1; //scanf

	//int val2;
	//std::cout << "두 번째 숫자입력: ";
	//std::cin >> val2;

	//int result = val1 + val2;
	//std::cout << "덧셈결과: " << result << std::endl;

	//-----------------------------------------------------------------------------------------------

	//----------------------------------for문--------------------------------------------------------
	/*int val1, val2;
	int result = 0;
	std::cout << "두개의 수 입력";
	std::cin >> val1 >> val2;

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++)
		{
			result += i;
		}
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
		{
			result += i;
		}
	}

	std::cout << "두 수 사이의 정수 합: " << result << std::endl;*/

	//---------------------------------------------------------------------------

	char name[100];
	char lang[200];

	std::cout << "이름은 무엇인가? ";
	std::cin >> name;

	std::cout << "좋아하는 프로그래밍 언어는 무엇인가요? ";
	std::cin >> lang;

	std::cout << "내 이름은" << name << "입니다. \n";
	std::cout << "제일 좋아하는 언어는 " << lang << "입니다" << std::endl;
	return 0;
}