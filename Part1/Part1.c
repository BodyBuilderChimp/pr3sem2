#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    int *A, *B;
    float *C;

    printf("Введите значение a: ");
    scanf("%d", &a);
    printf("Введите значение b: ");
    scanf("%d", &b);

    A = &a;
    B = &b;
    C = (float *)malloc(sizeof(float));

    if (b % 2 != 0) {
        *A *= 2;
        *C = (float)b / 2;
        printf("a: %d\n", a);
        printf("b: %.1f\n", *C);
    } else {
        *A *= 2;
        *B /= 2;
        printf("a: %d\n", a);
        printf("b: %d\n", b);
    }

    free(C);

    return 0;
}
