#include <stdio.h>

void addr(int* x) {
    printf("%d\n", *x+2);
}

int main() {
    int i =0;
    int* x = &i;
    printf("%d\n", i);
    printf("%d\n", x);
    printf("%d\n", &i);
    printf("%d\n", *x);
    addr(&i);
    return 0;
}