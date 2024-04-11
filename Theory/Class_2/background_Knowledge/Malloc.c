#include <stdlib.h> // malloc을 사용하기 위한 헤더 파일

//메모리 사용을 유동적으로 할수있게 할 수 있음
int main() {
    int* ptr = (int*)malloc(sizeof(int) * 10); // 10개의 정수를 저장할 수 있는 메모리 할당
    if (ptr != NULL) {
        // 메모리 할당 성공
        // ptr을 사용한 작업 수행
    }
    free(ptr); // 할당된 메모리 해제
    return 0;
}