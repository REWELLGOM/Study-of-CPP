#include <iostream>
#include <stdexcept> // std::runtime_error를 사용하기 위한 헤더

int main() {
    try {
        // 예외가 발생할 수 있는 코드
        std::cout << "Trying to use a risky operation...\n";
        throw std::runtime_error("A problem occurred"); // 예외 발생
    }
    catch (const std::runtime_error& e) {
        // 예외 처리 코드
        std::cout << "Caught a runtime_error: " << e.what() << '\n';
    }
    catch (...) {
        // 모든 예외를 잡는 catch 블록
        std::cout << "Caught an unexpected exception.\n";
    }

    std::cout << "Continuing with the rest of the program...\n";
    return 0;
}