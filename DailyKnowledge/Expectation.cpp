#include <iostream>
#include <stdexcept> // std::runtime_error를 사용하기 위한 헤더

using namespace std;
int main() {
    try {
        // 예외가 일어날수 있는 상황 잡는 용도
        cout << "Trying to use a risky operation...\n"; //예외 발생시 출력될 이름
        throw runtime_error("A problem occurred"); // 예외 발생 catch로 넘김
    }
    catch (const runtime_error& e) {
        // 예외 처리 코드
        cout << "Caught a runtime_error: " << e.what() << '\n';
    }
    catch (...) {
        // 모든 예외를 잡는 catch 블록
        cout << "Caught an unexpected exception.\n";
    }

    cout << "Continuing with the rest of the program...\n";
    return 0;
}