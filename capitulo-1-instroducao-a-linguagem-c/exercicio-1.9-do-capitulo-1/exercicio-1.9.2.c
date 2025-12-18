//
// Created by Robert L Resende on 15/12/25.
//
//Escreva funcoes similares ao codigo do exemplo 1.4.1, definindo variaveis de
//tipos e imprimindo-as. use os formatos de leituras e escritas: %d %i %o %x para inteiros
//e %f %e para reais
//Codigos     | significados
//%d ou %i    | inteiros
//%o          | octal
//%x          | hexadecimal
//%f          | float

#include "cstdio"

int main(){

	//inteiro tipo %d, %i, %o, %x para inteiros %f %e para reais
	int a;
	double b;
	char c[50];
	printf("Digite um numero inteiro: ");
	scanf("%d", &a);
	printf("Digite um numero inteiro: ");
	scanf("%lf", &b);
	printf("Digite uma palavra: ");
	scanf("%s", c);


	printf("O numero digitado inteiro é: %d\n",a);
	printf("O numero octal digitado é: %f\n",b);
	printf("O numero hexadecimal digitado é: %f\n",b);
	printf("O numero em notação cientifica é: %e\n",b);
	printf("A palavra digitada é: %c99\n",c);

	return 0;
}