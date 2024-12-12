#include <stdio.h>
#include <ctype.h>

void leerCaracter(char *);
char procesarCaracter(char);

int main(){
    char c;
    leerCaracter(&c);
    char resultado = procesarCaracter(c);
    printf("El resultado es: %c\n", resultado);
    return 0;
}

void leerCaracter(char *c){
    printf("Ingrese un carácter: ");
    scanf("%c", c);
}

char procesarCaracter(char c){
    if (!isalpha(c)) {
        return '0';
    } else if (islower(c)) {
        return toupper(c);
    } else {
        return c;
    }
}