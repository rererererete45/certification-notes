#include<stdio.h>

int main(void) {
    int x = 5;
    int y = 2;
    int r = x > 3 ? x << 1 : y >> 1;

    printf("%d\n", r);
    return 0;
}
