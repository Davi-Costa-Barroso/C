//Davi Costa Barroso, questao 21
#include <stdio.h>
void primos(int x[10]){
	int i = 0;
	int num = 101;
	float resto2, resto3, resto5, resto7, resto11;
	while(i < 10){
		//Assumindo que 2, 3, 5, 7 e 11 sao primos
		resto2 = num % 2;
		resto3 = num % 3;
		resto5 = num % 5;
		resto7 = num % 7;
		resto11 = num % 11;
		if((resto2 != 0) && (resto3 != 0) && (resto5 != 0) && (resto7 != 0) && (resto11 != 0)){
			x[i] = num;
			i++;
		}	
		num++;
	}
}
int main(){
	int x[10];
	int i;
	primos(x);
	printf("Os 10 primeiros valores primos acima de 100 sao:\n");
	for(i=0;i<10;i++){
		printf("%d ", x[i]);	
	}
}
