#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tot 5

typedef struct {
	char nome[90];
	char fone[16];
	int idade;
}pessoa;

	pessoa pe[tot];
	int x, y, mem = 0;
		
	void entrada_dados();
	void classifica_nome();
	void classifica_idade();
	void classifica_fone();
	void mostrar_dados();
	void troca();

int main() {
	int opc;
	
	do {
		system("cls");
		printf("MENU\n");
		printf("1. Entrada de Dados.\n");
		printf("2. Classifica Nome.\n");
		printf("3. Classifica Idade.\n");
		printf("4. Classifica Fone.\n");
		printf("5. Mostrar Dados.\n");
		printf("6. Fim.\n");
		printf("opção: ");
		scanf("%d", &opc);
		switch (opc){
			case 1: entrada_dados(); break;
			case 2: classifica_nome(); break;
			case 3: classifica_idade(); break;
			case 4: classifica_fone(); break;
			case 5:	mostrar_dados(); break;
		}
	} while (opc != 6);
}

void entrada_dados() {
	int opt;
	do
	{
		system("cls");
		printf("ENTRADA DE DADOS\n");
		printf("1. Inserir dados de uma pessoa.\n");
		printf("2. Voltar ao menu principal.\n");
		printf("opção: ");
		scanf("%d", &opt);
		switch (opt) {
			case 1: 
				printf("Nome: ");
				scanf("%s", pe[mem].nome);
				printf("Telefone: ");
				scanf("%s", pe[mem].fone);
				printf("Idade: ");
				scanf("%d", &pe[mem].idade);
				mem++;
				break;
			case 2: break;
		}
	} while (opt != 2 && mem < tot);

}

void classifica_nome() {
	for (int x=0; x<tot; x++) {
		for (int y=x+1; y<tot; y++) {
			if (strcmp(pe[x].nome, pe[y].nome) > 0) {
				troca();
			}
		}
	}
}

void classifica_idade() {
	for (int x=0; x<tot; x++) {
		for (int y=x+1; y<tot; y++) {
			if (pe[x].idade > pe[y].idade) {
				troca();
			}
		}
	}
}

void classifica_fone() {
	for (int x=0; x<tot; x++) {
		for (int y=x+1; y<tot; y++) {
			if (strcmp(pe[x].fone, pe[y].fone) > 0) {
				troca();
			}
		}
	}
}

void troca() {
	pessoa temp;
	temp = pe[x];
	pe[x] = pe[y];
	pe[y] = temp;
}

void mostrar_dados() {
	printf("DADOS\n");
	for (int i=0; i<mem; i++) {
		printf("Nome: %s\n", pe[i].nome);
		printf("Telefone: %s\n", pe[i].fone);
		printf("Idade: %d\n", pe[i].idade);
		printf("\n");
	}
	system("pause");
}