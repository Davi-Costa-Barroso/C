//Davi Costa Barroso, Questao 05
#include <stdio.h>
int categoria(int idade){
	int categoria;
	
	if((idade >=5) && (idade<=7)){
		categoria = 1;
	}
	else if((idade >=8) && (idade<=10)){
		categoria = 2;
	}
	else if((idade >=11) && (idade<=13)){
		categoria = 3;
	}
	else if((idade >=14) && (idade<=17)){
		categoria = 4;
	}
	else if(idade >=18){
		categoria = 5;
	}
	return categoria;
}
int main(){
	int idade;
	printf("Digite idade do nadador: ");
	scanf(" %d", &idade);
	printf("A categoria desse nadador e %d", categoria(idade));
}
