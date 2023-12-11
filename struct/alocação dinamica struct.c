#include <stdio.h>

	struct aluno {
		char nome [20];
		int idade;
		int mat;
		char email [50];
	};
	  
	int main (void){
		struct aluno *estudante = (struct aluno*) malloc(sizeof(struct aluno)) ;
		if (estudante == NULL){
			exit(1);
		}
		printf("Digite seu nome: \n");
		scanf ("%s[^\n]", estudante->nome);
		printf("Digite sua idade: \n");
		scanf("%d", &estudante->idade);
		printf("Digite sua matricula: \n");
		scanf("%d", &estudante->mat);
		printf("Digite seu email: \n");
		scanf("%s[^\n]", estudante->email);
		free (estudante);
		return 0;
}
