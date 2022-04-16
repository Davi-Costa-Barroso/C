#include <stdio.h>
//Davi Costa Barroso, Questao 16
int main(){
	int voto;
	int a = 0;
	int b = 0;
	int c = 0;
	int nulo = 0;
	int branco = 0;
	printf("Digite voto 0 para finalizar o programa");
	printf("\n1-Candidato A\n2-Candidato B\n3-Candidato C\n4-Nulo\n5-Branco");
	printf("\nVoto: ");
	scanf(" %d", &voto);
	while(voto !=0){
		if(voto == 1){
			a +=1;
		}else if(voto == 2){
			b+=1;
		}
		else if(voto == 3){
			c+=1;
		}
		else if(voto == 4){
			nulo +=1;
		}
		else if(voto == 5){
			branco +=1;
		}
		else{
			printf("Codigo nao existe, digite novamente");
		}
		printf("\nVoto: ");
		scanf(" %d", &voto);	
	}
	printf("\n-------VOTOS-------");
	printf("\nCandidato A: %d", a);
	printf("\nCandidato B: %d", b);
	printf("\nCandidato C: %d", c);
	printf("\nNulo: %d", nulo);
	printf("\nBranco: %d", branco);
	return 0;
}
