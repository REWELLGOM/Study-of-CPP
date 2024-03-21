#include <iostream>

int main()
{
    using namespace std;
    int score[3] = {100, 90, 20};
    int midScore[3] = {0,};
    int finalScore[] = {10, 20, 90};

    cout << score[0] << endl;
    cout << midScore[1] << endl;
    cout << finalScore[2] << endl;

    cout << "&score: " << &score << endl;
    cout << "&score[0]: " << &score[0] << endl; //첫 값과 선언할때의 값은 같다
    cout << "&score[1]: " << &score[1] << endl;
    cout << "(score+1): " << (score+1) << endl;
    cout << "*(score + 1): " << *(score + 1) << endl;

    return 0;
}