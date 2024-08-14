#include <stdio.h>
#include <stdlib.h>

typedef struct animal{
	char raca[50], cor[20], sexo;
	float peso;
}Animal;


Animal entrada(void);
void impressao (Animal dados);


int main(void){
	Animal bd[10];
	
	
	for(int i=0;i<10;i++){
		printf("Digite dados do animal %i\n\n", i+1);
		bd[i]=entrada();
		system("cls");
	}
	
	for(int i=0;i<10;i++){
		impressao(bd[i]);
	}
	
	
		
	return 0;
}

Animal entrada(void){
	Animal dados;
	printf("Digite a raca do animal: ");
	scanf("%s", dados.raca);
	fflush(stdin);
	printf("Digite a cor do animal: ");
	scanf("%s", dados.cor);
	fflush(stdin);
	printf("Digite o peso do animal: ");
	scanf("%f", &dados.peso);
	return dados;
	
}

void impressao(Animal dados){
	printf("Dados do animal: %s, %s, %f\n", dados.raca, dados.cor, dados.peso);
}
