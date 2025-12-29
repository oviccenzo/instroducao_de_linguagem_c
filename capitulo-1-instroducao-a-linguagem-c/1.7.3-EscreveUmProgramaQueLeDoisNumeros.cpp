//
// Created by Robert L Resende on 15/12/25.
//
#include "cstdio"

int main(){
	int a,b,c,resutaldo;

	printf("Digite um numero interio: \n");
	scanf("%d",&a);

	printf("Digite outro numero interio: \n");
	scanf("%d",&b);

//    printf("Digite outro numero inteiro: \n");
//    scanf("%d", &c);

	resutaldo = a % b;

	printf("O resto da divisão do primeiro número pelo segundo é = %d\n",resutaldo);

	return 0;
}