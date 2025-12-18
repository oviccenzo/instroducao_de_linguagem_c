//
// Created by Robert L Resende on 15/12/25.
//
/*Estude o comportamento assintótico de cada uma das expressões abaixo:
 * A) (1+x)/x, x = 10e-12, x = 10e-13, x = 10e-14, x= 10e-15, x = 10e-16,...
 * B) (1+1/x)ˆx , x = 10e12, x = 10e13, x = 10e14, x = 10e15, x = 10e16, ...
 * Para cada um dos itens acima, escreva um programa para estudar o comporta-
 * mento numérico. Use variável double no primeiro programa, depois use float
 * para comparações. Explique o motivo da discrepância entre os resultados
 * esperado e o numérico. Para entender melhor esse fenômeno, leia o caítulo 2
 * do livro https://www/ufrgs.br/numerico/, especialmente a seção sobre cance-
 * lamento catastrófico.*/
#include "cstdio"
#include "cmath"

int main(){

	//A) (1+x)/x, x = 10e-12, x = 10e-13, x = 10e-14, x= 10e-15, x = 10e-16,...
	double x = 10e-12, x1 = 10e-13, x2 = 10e-14, x3 = 10e-15, x4 = 10e-16;

	double resultado = ((1+x) -1) / x;
	double resultado1 = ((1+x1) -1) /x1;
	double resultado2 = ((1+x2) -1) /x2;
	double resultado3 = ((1+x3) -1) /x3;
	double resultado4 = ((1+x4) -1) /x4;
	printf("O resultado esperado do item a: \n");
	printf("O resultado de x = 10e-12 eh: %lf\n",resultado);
	printf("O resultado1 de x1 = 10e-13 eh: %lf\n",resultado1);
	printf("O resultado2 de x2 = 10e-14 eh: %lf\n",resultado2);
	printf("O resultado3 de x3 = 10e-15 eh: %lf\n",resultado3);
	printf("O resultado4 de x4 = 10e-16 eh: %lf\n",resultado4);

	printf("\n");

	//B) (1+1/x)ˆx , x = 10ˆ12, x = 10ˆ13, x = 10ˆ14, x = 10ˆ15, x = 10ˆ16,
	//x = 10ˆ17...
	float x5 = (10e12), x6 = (10e13), x7 = (10e14), x8 = (10e15),
			x9 = (10e16), x10 = (10e17);

	float resultado5 = powf((1.0f + 1.0f/x5), x5);
	float resultado6 = powf((1.0f + 1.0f/x6), x6);
	float resultado7 = powf((1.0f + 1.0f/x7), x7);
	float resultado8 = powf((1.0f + 1.0f/x8), x8);
	float resultado9 = powf((1.0f + 1.0f/x9), x9);
	float resultado10 = powf((1.0f + 1.0f/x10), x10);

	printf("O resultado esperado do item b: \n");
	printf("O resultado5 de x5 = 10e12 %f\n",resultado5);
	printf("O resultado6 de x6 = 10e13 %f\n",resultado6);
	printf("O resultado7 de x7 = 10e14 %f\n",resultado7);
	printf("O resultado8 de x8 = 10e15 %f\n",resultado8);
	printf("O resultado9 de x9 = 10e16 %f\n",resultado9);
	printf("O resultado10 de x10 = 10e17 %f\n",resultado10);


	return 0;
}