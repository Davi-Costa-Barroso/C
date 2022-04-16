//Davi Costa Barroso, questao 16
#include <stdio.h>
void impares(int a[500]){
	int num = 1;
	int resto;
	int i = 0;
	
	while(i<500){
		resto = num % 2;
		if(resto != 0){
			a[i] = num;
			i++;
		}
		num++;
	}
}
int main(){
	int a[500];
	int i;
	impares(a);
	
	for(i=0;i<500;i++){
		printf(" %d", a[i]);	
	}
}
