#include <iostream>

//int main(void)
//{
//	std::cout << "[3,3,3] : " << BoxVolume(3, 3, 3) << std::endl;
//	std::cout << "[5,5,D] : " << BoxVolume(5, 5) << std::endl;
//	std::cout << "[7,D,D] : " << BoxVolume(7) << std::endl;
//	return 0;
//}
//
//int BoxVolume(int length, int width = 1, int height = 1)
//{
//	return length * width * height;
//}

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    cout << a + b << endl;
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++)
        {
            cout << "*";
        }
        cout << std::endl;
    }
    return 0;
}