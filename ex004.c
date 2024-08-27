//3. Construa um programa que contém duas variáveis inteiras, e cada uma destas variáveis deverá ter um valor
//atribuído nelas, através de uma entrada de dado do usuário. Também elaborem no mesmo programa três funções, 
//que deveram usar o conceito de ponteiro para manipular a passagem dos dados para as funções. As funções deverão 
//ter as seguintes funcionalidades: a soma das duas variáveis, a diferença entre as duas variáveis e a multiplicação
//das duas variáveis.  


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void soma(int *a, int *b, int *r);
void mult(int *a, int *b, int *r);
void diferenca(int *a, int *b, int *r);

int main(void) {
	int a, b, r;
	
	printf("Digite o primeiro valor:");
	scanf("%i", &a);
	fflush(stdin);
	printf("Digite o segundo valor:");
	scanf("%i", &b);
	fflush(stdin);
	
	soma(&r,&a,&b);
	printf("A soma e: %i\n", r);
	diferenca(&r,&a,&b);
	printf("A diferenca e: %i\n", r);
	mult(&r,&a,&b);
	printf("A multiplicacao e: %i\n", r);


    return 0;
}

void soma(int *r, int *a, int *b){
	*r=*a+*b;
}

void diferenca(int *r, int *a, int *b){
	*r=*a-*b;
}

void mult(int *r, int *a, int *b){
	*r=*a**b;
}
