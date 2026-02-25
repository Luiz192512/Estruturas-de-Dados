#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char nome[90];
	char fone[16];
	int idade;
}pessoa;
		
	void entrada_dados();
	void classifica_nome();
	void classifica_idade();
	void classifica_fone();
	void mostrar_dados();

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


