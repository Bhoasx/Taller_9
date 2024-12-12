#include <stdio.h>

int tiempo(int , int , int );
void leertiempo(int *, int *, int *);

int main() {
    int h1, m1, s1, h2, m2, s2;
    int tiempo1, tiempo2, diferencia;
    printf("Primer tiempo:\n");
    leertiempo(&h1, &m1, &s1);
    printf("Segundo tiempo:\n");
    leertiempo(&h2, &m2, &s2);
    tiempo1 = tiempo(h1, m1, s1);
    tiempo2 = tiempo(h2, m2, s2);
    if (tiempo1 > tiempo2){
        diferencia = tiempo1 - tiempo2 ;
    } else {
        diferencia = tiempo2 - tiempo1 ;
    }
    printf("La diferencia en segundos entre los dos tiempos es: %d\n", diferencia);
    return 0;
}

int tiempo(int hor, int min, int seg){
    return (hor * 3600) + (min * 60) + seg;
}

void leertiempo(int *hor, int *min, int *seg){
    do {
        printf("Introduce las horas: ");
        scanf("%d", hor);
        if (*hor < 0) {
            printf("Las horas no pueden ser negativas. Inténtalo de nuevo.\n");
        }
    } while (*hor < 0);
    do {
        printf("Introduce los minutos: ");
        scanf("%d", min);
        if (*min < 0 || *min > 59) {
            printf("Los minutos deben estar entre 0 y 59. Inténtalo de nuevo.\n");
        }
    } while (*min < 0 || *min > 59);
    do {
        printf("Introduce los segundos: ");
        scanf("%d", seg);
        if (*seg < 0 || *seg > 59) {
            printf("Los segundos deben estar entre 0 y 59. Inténtalo de nuevo.\n");
        }
    } while (*seg < 0 || *seg > 59);
}