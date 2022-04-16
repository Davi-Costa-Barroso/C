//Davi Costa Barroso, questao 11
#include <stdio.h>
float mediaAritmetica(){
	float num;
	float soma = 0;
	float cont = 0;
	float media = 0.0;
	printf("Digite numero positivo: ");
	scanf(" %f", &num);
	while(num > 0){
		soma += num;
		cont++;
		printf("Digite numero positivo: ");
		scanf(" %f", &num);
	}
	if(cont > 0){
	media = soma / cont;		
	}
	return media;
}
int main(){
	float media;
	media = mediaAritmetica();
	printf("Media aritmetica dos valores: %.2f", media);
	
}
