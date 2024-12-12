#include <stdio.h>
#include <stdbool.h>

bool compararCaracteres(char , char);

int main() {
    char ch1, ch2;

    printf("Ingresa el primer caracter: ");
    scanf(" %c", &ch1);
    printf("Ingresa el segundo caracter: ");
    scanf(" %c", &ch2);

    if (compararCaracteres(ch1, ch2)) {
        printf("Verdadero\n");
    } else {
        printf("Falso\n");
    }
    return 0;
}

bool compararCaracteres(char ch1, char ch2) {
    return ch1 <= ch2;
}