#include <stdio.h>
//Davi Costa Barroso, Questao 20
int main(){
	int codigoCidade;
	int nVeiculos;
	int nAcidentes, i;
	int maiorIndice, menorIndice;
	int cidadeMaiorIndice, cidadeMenorIndice;
	float somaVeiculos = 0;
	float somaAcidentesRS = 0;
	float mediaVeiculos = 0;
	float mediaAcidentesRS = 0;
	float qtdCidadesRS = 0;
	char estado[2];
	for(i=0;i<200;i++){
		
	printf("\nDigite codigo da cidade: ");
	scanf(" %d", &codigoCidade);
	printf("Estado (RS, PA, MG...): ");
	scanf(" %s", &estado);
	printf("Numero de veiculos de passeio: ");
	scanf(" %d", &nVeiculos);
	printf("Numero de acidentes com vitimas: ");
	scanf(" %d", &nAcidentes);
	
	if(i==0){
		maiorIndice = nAcidentes;
		menorIndice = nAcidentes;
		cidadeMenorIndice = codigoCidade;
		cidadeMaiorIndice = codigoCidade;
	}
	else if(nAcidentes >= maiorIndice){
		maiorIndice = nAcidentes;
		cidadeMaiorIndice = codigoCidade;
	}
	else if(nAcidentes < menorIndice){
		menorIndice = nAcidentes;
		cidadeMenorIndice = codigoCidade;
	}
	
	somaVeiculos += nVeiculos;
	//Converte para maiusculo	
	strupr(estado);
	if(strcmp(estado, "RS") == 0){
		qtdCidadesRS +=1;
		somaAcidentesRS += nAcidentes;
	}
	}
	
	mediaAcidentesRS = somaAcidentesRS / qtdCidadesRS;
	mediaVeiculos = somaVeiculos / i;
	
	printf("\nMaior indice de acidentes com vitimas: %d", maiorIndice);
	printf("\nMenor indice de acidentes com vitimas: %d", menorIndice);
	printf("\nCodigo da cidade com o maior indice de acidentes: %d", cidadeMaiorIndice);
	printf("\nCodigo da cidade com o menor indice de acidentes: %d", cidadeMenorIndice);
	printf("\nMedia de veiculos brasileiros: %.2f", mediaVeiculos);
	printf("\nMedia de acidentes com vitimas entre as cidades do Rio Grande do Sul: %.2f", mediaAcidentesRS);
	
	return 0;
}
