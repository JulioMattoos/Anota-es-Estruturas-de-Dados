//2. Construa um programa para calcular a área e de um círculo, a área deve ser do tipo de ponteiro. 


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void area(float *pi, float raio);

int main(void) {
    float A, raio;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    area(&A, raio);

    printf("A area e %f\n", A);

    return 0;
}

void area(float *pi, float raio) {
    *pi = 3.14159 * raio * raio;
}
