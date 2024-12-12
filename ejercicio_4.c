#include <stdio.h>
#include <math.h>
#define PP 2 

void leerpunto(float punto[PP], int numeroPunto);
float distancia(float p1[PP], float p2[PP]);

int main(){
    float p1[PP], p2[PP];
    leerpunto(p1, 1);
    leerpunto(p2, 2);
    float dist = distancia(p1, p2);
    printf("La distancia entre los puntos es: %.2f\n", dist);
    return 0;
}

void leerpunto(float punto[PP], int numeroPunto){
    const char *coordenadas[PP] = {"x", "y"};
    printf("Ingrese las coordenadas del punto %d\n", numeroPunto);
    for (int i = 0; i < PP; i++) {
        printf("Posicion en %s: ", coordenadas[i]);
        scanf("%f", &punto[i]);
    }
}

float distancia(float p1[PP], float p2[PP]){
    return sqrt((p2[0] - p1[0]) * (p2[0] - p1[0]) + (p2[1] - p1[1]) * (p2[1] - p1[1]));
}