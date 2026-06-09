//
// Created by Robert L Resende on 15/12/25.
//
//E1.9.3. Escreva um programa que lê tês caracteres um inteiros
//e dois doubles's e depois imprime todos eles.
#include "cstdio"

int main(){
	//caractere
	char c1,c2,c3;
	//double
	double m1,m2;
	//int
	int int1;

	//caractere
	printf("Digite um carctere: \n");
	scanf(" %c",&c1);
	printf("Digite um carctere: \n");
	scanf(" %c",&c2);
	printf("Digite um carctere: \n");
	scanf(" %c",&c3);
	printf("O caractere 1 lido é: %c\n",c1);
	printf("O caractere 2 lido é: %c\n",c2);
	printf("O caractere 3 lido é: %c\n",c3);

	//double
	printf("Digite um numero com ponto flutuante: ");
	scanf("%lf",&m1);
	printf("Digite um numero com ponto flutuante: ");
	scanf("%lf",&m2);
	printf("O numero lido com ponto flutuante: é %.2lf\n",m1);
	printf("O numero lido com ponto flutuante: é %.2lf\n",m2);

	//int
	printf("Digite um numero inteiro: ");
	scanf("%d",&int1);
	printf("O numero lido com o inteiro é: %d\n",int1);

}