#include <iostream>
#include <thread>

void threadFunction() {
    std::cout << "Hello from thread!" << std::endl;
}

int main() {
    std::thread myThread(threadFunction);
    myThread.join(); // 메인 스레드가 myThread의 종료를 기다립니다.
    return 0;
}