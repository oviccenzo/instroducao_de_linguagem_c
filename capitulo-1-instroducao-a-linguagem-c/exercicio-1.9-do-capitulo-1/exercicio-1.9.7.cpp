//
// Created by Robert L Resende on 15/12/25.
//
/*Exercicio 1.9.7 Escreva um programa que lê dois números inteiros
 * a e b imprime o resultado do teste a > b*/
#include "cstdio"

int main(){

	int a,b;
	printf("Digite um numero a e o numero b: ");
	scanf("%d %d",&a,&b);
	printf("O numero 1 eh verdadeiro ou 0 eh falso: %d",a>b);

	return 0;
}