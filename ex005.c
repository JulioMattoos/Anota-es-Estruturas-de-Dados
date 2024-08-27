/*4. Faça um programa que peça um número para calcular o fatorial. 
Deve tem uma função para calcular o fatorial (por referência).  
*/
#include <stdio.h>
#include <stdlib.h>
 
void fatorar(int *num, int *resultado);
 
int main(void) {
    int n;
    int res;
 
    printf("Digite o numero para fatorar: ");
    scanf("%i", &n);
 
    fatorar(&n, &res);
 
    return 0;
}
 
void fatorar(int *num, int *resultado) {
	*resultado = 1;
    for (int i = *num; i >= 1; i--) {
        *resultado *= i;
    }
    printf("%i! =
