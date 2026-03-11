#include <stdio.h>

int main() {
	int idade = 45, *i, **ii;
	char nome[30] = "Moreno", *p, **pp;
	p = nome, i = &idade;
	pp = &p, ii = &i;
	
	printf("                                 Valor nome = %s\n", nome);
	printf("                            Usando ponteiro = %s\n", p);
	printf("                Usando ponteiro de ponteiro = %s\n", *pp);
	printf("-------------------------------------------------------\n");
	printf("              2o. Caracter usando pp com [] = %c\n", (*pp)[1]);
	printf("       3o. Caracter usando aritmetica de pp = %c\n", *(*pp+2));
	printf("                             Variavel idade = %d\n", idade);
	printf("                            Usando ponteiro = %d\n", *i);
	printf("                Usando ponteiro de ponteiro = %d\n", **ii);
	printf("-------------------------------------------------------\n");
	printf("                               End. de nome = %p\n", &nome);
	printf("                      End. de ponteiro nome = %p\n", &p);
	printf("          End. de ponteiro de ponteiro nome = %p\n", &pp);
	printf("-------------------------------------------------------\n");
	printf("                              End. de idade = %p\n", &idade);
	printf("                     End. ponteiro de idade = %p\n", &i);
	printf("         End. de ponteiro de ponteiro idade = %p\n", &ii);
	printf("-------------------------------------------------------\n");
	printf("          End. onde ponteiro de nome aponta = %p\n", &*p);
	printf("End. de ponteiro de ponteiro de nome aponta = %p\n", &**pp);
	printf("-------------------------------------------------------\n");
	
}

