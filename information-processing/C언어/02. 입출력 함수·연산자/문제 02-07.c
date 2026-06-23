#include<stdio.h>

int main(void) {
    int a = 10, b = 3;
    int result;

    // 조건식 ? 참일 때 반환값 : 거짓일 때 반환값;
    result = (a > b) ? a - b : b - a;
    printf("%d\n", result);

    return 0;
}
