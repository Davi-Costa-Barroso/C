#include <stdio.h>
//Davi Costa Barroso, Questao 22
int main(){
	//Como os tres primeiros ja foram dados (1, 2 e 3), vamos começar verificando pelo 4
	int n = 4;
	float restode2, restode3;
	printf("Dado os tres primeiros numeros primos: 1, 2, 3");
	while(n <=20){
		restode2 = n % 2;
		restode3 = n % 3;
		if((restode2 != 0) && (restode3 != 0)){
			printf("\n%d e um numero primo!", n);
		}
		n++;
	}
	return 0;
}
