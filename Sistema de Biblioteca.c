#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
//DAVI COSTA BARROSO
struct biblioteca{
	char *titulo;
	char *autor;
	int ISBN;
	int anoEdicao;
	char *editora;
	bool emprestado;
};
typedef struct biblioteca Biblioteca;

void freeLivros (Biblioteca *livros) {
    free (livros -> titulo);
    free (livros -> autor);
    free (livros -> editora);
    free (livros);
}

Biblioteca *newBiblioteca(char *titulo, char *autor, int ISBN, int anoEdicao, char *editora, bool emprestado){
	Biblioteca *novo = (Biblioteca*) malloc(sizeof(Biblioteca)*100);
	novo -> titulo = titulo;
	novo -> autor = autor;
	novo -> ISBN = ISBN;		
	novo -> anoEdicao = anoEdicao;	
	novo -> editora = editora;
	novo -> emprestado = emprestado;
	return novo;
}
void menu(){
	printf("\n--------MENU--------\n");
	printf("1 - CADASTRAR LIVRO\n");
	printf("2 - REMOVER LIVRO\n");
	printf("3 - EMPRESTAR LIVRO\n");
	printf("4 - DEVOLVER LIVRO\n");
	printf("5 - LISTAR LIVROS EMPRESTADOS\n");
	printf("6 - LISTAR LIVROS DISPONIVEIS\n");
	printf("7 - ENCERRAR\n");
}
void cadastrar(Biblioteca **livros){
  int anoEdicao;
  int ISBN;
  char *titulo = (char *) malloc (50 * sizeof (char));
  char *autor = (char *) malloc (50 * sizeof (char));
  char *editora = (char *) malloc (50 * sizeof (char));
  printf("\n--------CADASTRAR--------\n");
  printf ("Digite titulo do livro: ");
  scanf (" %[^\n]s", titulo);

  printf ("Nome do autor: ");
  scanf (" %[^\n]s", autor);
  
  printf ("ISBN: ");
  scanf (" %d", &ISBN);
  
  printf ("Ano de edicao: ");
  scanf (" %d", &anoEdicao);
  
  printf ("Editora: ");
  scanf (" %[^\n]s", editora);
  int i;
  for(i=0;i<100;i++){
  	if(livros[i] == NULL){
  		livros[i] = newBiblioteca (titulo, autor, ISBN, anoEdicao, editora, false);
  		break;
	}
  }
}
void emprestar(Biblioteca **livros){
	int emprestar;
	printf("--------EMPRESTAR LIVRO--------\n");
	printf("Digite numero do livro para emprestar: ");
	scanf(" %d", &emprestar);
	if((livros[emprestar] != NULL) && (livros[emprestar] -> emprestado == false)){
		livros [emprestar] -> emprestado = true;
		printf("\nLivro %d emprestado!\n", emprestar);
	}
	else{
		printf("\nNao foi possivel emprestar\n");
	}
}
void devolver(Biblioteca **livros){
	int devolver;
	printf("--------DEVOLVER LIVRO--------\n");
	printf("Digite numero do livro para devolver: ");
	scanf(" %d", &devolver);
	if((livros[devolver] != NULL) && (livros[devolver] -> emprestado == true)){
		livros [devolver] -> emprestado = false;
		printf("\nLivro %d foi devolvido!\n", devolver);
	}
	else{
		printf("\nNao foi possivel devolver\n");
	}
}
void listarDisponiveis(Biblioteca **livros){
  	int i;
  	printf("--------LIVROS DISPONIVEIS--------");
  	for (i = 0; i < 100; i++) {
  		if((livros[i] != NULL) && (livros[i] -> emprestado == false)){
  			printf("\nLivro %d\n", i);	
			printf("\nTitulo: %s", livros [i] -> titulo);	
			printf("\nAutor: %s", livros [i] -> autor);	
			printf("\nISBN: %d", livros [i] -> ISBN);	
			printf("\nAno de edicao: %d", livros [i] -> anoEdicao);	
			printf("\nEditora: %s\n", livros [i] -> editora);	
   		}
	}
}
void listarEmprestados(Biblioteca **livros){
	int i;
	printf("--------LIVROS EMPRESTADOS--------");
  	for (i = 0; i < 100; i++) {
  		if((livros[i] != NULL) && (livros[i] -> emprestado == true)){
  			printf("\nLivro %d\n", i);	
			printf("\nTitulo: %s", livros [i] -> titulo);	
			printf("\nAutor: %s", livros [i] -> autor);	
			printf("\nISBN: %d", livros [i] -> ISBN);	
			printf("\nAno de edicao: %d", livros [i] -> anoEdicao);	
			printf("\nEditora: %s\n", livros [i] -> editora);	
   		}
	}
}
void remover(Biblioteca **livros){
	int remover;
	printf("--------REMOVER LIVRO--------\n");
	printf("Digite numero do livro para remover: ");
	scanf(" %d", &remover);
	if((livros[remover] != NULL) && (livros[remover]-> emprestado == false) ){
		livros [remover] = NULL;
		printf("\nLivro %d foi removido!\n", remover);
	}else{
		printf("\nNao foi possivel remover\n");
	}
}
bool verificaArmazenamento(Biblioteca **livros){
	int i;
	bool vazio;
	for(i=0;i<100;i++){
		if(livros[i] != NULL){
			vazio = false;
		}else{
			vazio = true;
			break;
		}
	}
	return vazio;
}
int main(){
	int opcao;
  	int i;
  	bool vazio;
  	Biblioteca ** livros = (Biblioteca **) malloc (sizeof (Biblioteca *)*100);
	for(i=0;i<100;i++){
		livros[i] = NULL;
	}
	while(opcao !=7){
	  menu();	
	  printf("Opcao: ");
	  scanf(" %d", &opcao);
	  switch (opcao){
	    case 1:
	    	vazio = verificaArmazenamento(livros);
	    	if(vazio){
	    		cadastrar(livros);
			}else{
				printf("\nBiblioteca cheia, nao e possivel armazenar livros.\n");
			}	
   		break;
   		case 2:
   			remover(livros);
   		break;
		case 3:
   			emprestar(livros);
   		break;
   		case 4:
   			devolver(livros);
   		break;
   		case 5:
   			listarEmprestados(livros);
   		break;
   		case 6:
    	  	listarDisponiveis(livros);
      break;
    }
  }
  printf("\n--------Programa encerrado--------");
  for(i=0;i<100;i++){
  	freeLivros(livros[i]);	
  }
  return 0;
}
