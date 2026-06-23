#include<stdio.h>

int main(void) {
    int a = 10;
    int b = 3;
    int r = a / b + a % b * 2;

    printf("%d\n", r);
    return 0;
}
