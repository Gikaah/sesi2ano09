#include <stdio.h>
int main (){
	float valor, soma;
	int contagem;
	
	soma = 0;
	
	contagem = 1;
	while(contagem <=5){
		printf("Digite um número: ", contagem);
		scanf("%f", &valor);
		soma = soma + valor;
		contagem = contagem + 1;
	}
	printf("O resultado da soma é: %2.f", soma);
	
	
	return 0;
}