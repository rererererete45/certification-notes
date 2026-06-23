#include<stdio.h>

int main(void) {
    int a = 4, b = 7;

    a ^= b;
    b &= a;

    printf("%d%d\n", a, b);
    return 0;
}
