#include <stdio.h>

int producto(int a, int b);
void Leernumeros(int *a, int *b);

int main(){
    int a, b, resultado;
    Leernumeros(&a, &b);
    resultado = producto(a, b);
    printf("A   B   PRODUCTO\n");
    printf("%d   %d   %d\n", a, b, resultado);
    printf("----------------\n");
    return 0;
}

int producto(int a, int b) {
    return a * b;
}

void Leernumeros(int *a, int *b) {
    do {
        printf("Ingrese el valor de A: ");
        scanf("%d", a);
        if (*a <= 0) {
            printf("Valor no permitido. Ingrese un valor mayor a 0.\n");
        }
    } while (*a <= 0);
    do {
        printf("Ingrese el valor de B: ");
        scanf("%d", b);
        if (*b <= 0) {
            printf("Valor no permitido. Ingrese un valor mayor a 0.\n");
        }
    } while (*b <= 0);
}