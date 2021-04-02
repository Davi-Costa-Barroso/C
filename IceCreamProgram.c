//Davi Costa Barroso
#include <stdio.h>
//Variaveis Globais de estoque e contador de vendas
int estoque_refri = 300;
int estoque_bolas = 700;
int cont = 0;
int vendas[2][1000];
void produtos(){
	printf("\n========= PRODUTOS DA SORVETERIA =========\n");
	printf("Codigo 10 - Refrigerante        R$ 2,50\n");
	printf("Codigo 15 - Casquinha simples   R$ 1,50\n");
	printf("Codigo 20 - Casquinha dupla     R$ 2,50\n");
}
void armazenar_informacoes(int codigo, int qtd_comprada){
	// vendas[linhas][colunas]
	vendas[1][cont] = codigo;
	vendas[2][cont] = qtd_comprada;
	//Diminui estoque
	if(codigo == 10){
		estoque_refri -= vendas[2][cont];
	}
	else if(codigo == 15){
		estoque_bolas -= vendas[2][cont];
	}
	else if(codigo == 20){
		estoque_bolas -= vendas[2][cont]*2;
	}
}
void emitir_relatorio(){
	//Variaveis do valor pago de cada produto, do total e da media de pedidos
	float valor_pago_refri = 0;
	float valor_pago_simples = 0;
	float valor_pago_dupla = 0;
	float tot_arrecadado = 0;
	float media_pedido = 0;
	//Variaveis para quantidade de cada produto comprada
	int qtd_refri = 0;
	int qtd_casq_simples = 0;
	int qtd_casq_dupla = 0;
	//Verifica quantidade vendida para cada produto
	int i;
	for(i=1;i<1000;i++){
		if(vendas[1][i] == 10){
			qtd_refri += vendas[2][i];
		}
		else if(vendas[1][i] == 15){
			qtd_casq_simples += vendas[2][i];
		}
		else if(vendas[1][i] == 20){
			qtd_casq_dupla += vendas[2][i];
		}
	}
	//Calculo do valor de cada produto
	valor_pago_refri = qtd_refri * 2.5;
	valor_pago_simples = qtd_casq_simples * 1.5;
	valor_pago_dupla = qtd_casq_dupla * 2.5;
	//Calculo do total arrecadado
	tot_arrecadado = valor_pago_refri + valor_pago_simples + valor_pago_dupla;
	//Calcula da media dos pedidos
	if(cont > 0){
		media_pedido = (float) tot_arrecadado / cont;
	}
	printf("\n==========RELATORIO FINAL DO EXPEDIENTE==========");
	printf("\nFOI VENDIDO:");
	printf("\n%d Refrigerantes", qtd_refri);
	printf("\n%d Casquinhas simples", qtd_casq_simples);
	printf("\n%d Casquinhas duplas", qtd_casq_dupla);
	printf("\n");
	printf("\nVALOR FATURADO: ");
	printf("\nR$ %.2f Refrigerantes", valor_pago_refri);
	printf("\nR$ %.2f Casquinhas simples", valor_pago_simples);
	printf("\nR$ %.2f Casquinhas duplas", valor_pago_dupla);
	printf("\n");
	printf("\nTotal arrecadado: R$ %.2f", tot_arrecadado);
	printf("\nMedia do valor pago por pedido: R$ %.2f", media_pedido);
	printf("\nEstoque de latas de refrigerante: %d", estoque_refri);
	printf("\nEstoque de bolas de sorvete: %d", estoque_bolas);
}
int main(){
	int opcao, codigo, qtd_comprada;
	//Menu
	printf("\n=============== MENU ===============\n");
	printf("0 - efetuar uma nova venda\n1 - encerrar o movimento do dia");
	printf("\nOpcao: ");
	scanf(" %d", &opcao);
	while(opcao == 0){
		//Lista os produtos da sorveteria
		produtos();
		//Usuario vai informar produtos vendidos
		printf("\nDigite codigo do produto comprado: ");
		scanf(" %d", &codigo);
		printf("Digite quantidade comprada: ");
		scanf(" %d", &qtd_comprada);
		if(codigo == 10 && qtd_comprada > estoque_refri){
			printf("\nNAO TEM ESTOQUE\n");
		}
		else if(codigo == 15 && qtd_comprada > estoque_bolas){
			printf("\nNAO TEM ESTOQUE\n");
		}
		else if(codigo == 20 && (qtd_comprada*2) > estoque_bolas){
			printf("\nNAO TEM ESTOQUE\n");
		}
		else{
			//Armazenar informacoes
			cont++;
			armazenar_informacoes(codigo, qtd_comprada);
		}
		//menu
		printf("\n0 - efetuar uma nova venda\n1 - encerrar o movimento do dia");
		printf("\nOpcao: ");
		scanf(" %d", &opcao);
	}
	//Relatorio de final de expediente
	emitir_relatorio();
}
