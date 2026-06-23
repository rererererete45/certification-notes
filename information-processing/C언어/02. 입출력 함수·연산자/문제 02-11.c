#include<stdio.h>

int main(void) {
    int a = 3, b = 4;
    int result = a++ * ++b;

    printf("%d%d%d\n", a, b, result);
    return 0;
}
