#include<stdio.h>

int main(void) {
    int a = 5;
    int b = 0;
    b = a++;

    printf("%d%d\n", a, b);
    return 0;
}
