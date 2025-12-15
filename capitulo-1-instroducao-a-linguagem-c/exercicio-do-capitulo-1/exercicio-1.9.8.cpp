//
// Created by Robert L Resende on 15/12/25.
//
/*Estude o comportamento assintótico de cada uma das expressões abaixo:
 * A) (1+x)/x, x = 10e-12, x = 10e-13, x = 10e-14, x= 10e-15, x = 10e-16,...
 * B) (1+1/x)ˆx , x = 10e12, x = 10e13, x = 10e14, x = 10e15, x = 10e16, ...
 * Para cada um dos itens acima, escreva um programa para estudar o comporta-
 * mento numéric. Use variável double no primeiro programa, depois use float
 * para comparações. Explique o motivo da discrepância entre os resultados
 * esperado e o numérico. Para entender melhor esse fenômeno, leia o caítulo 2
 * do livro https://www/ufrgs.br/numerico/, especialmente a seção sobre cance-
 * lamento catastrófico.*/
#include "cstdio"
#include "cmath"

int main(){

	double x1 = 10e-12, x2 = 10e-13, x3 = 10e-14, x4 = 10e-15, x5 = 10e-16;
	//A) (1+x)/x, x = 10e-12, x = 10e-13, x = 10e-14, x= 10e-15, x = 10e-16,...
	double resultado = (1+x1) -1 /x1;
	double resultado1 = (1+x2) -1 /x1;
	double resultado2 = (1+x3) -1 /x1;
	double resultado3 = (1+x4) -1 /x1;
	double resultado4 = (1+x5) -1 /x1;


	float x8 = 10e12, x9 = 10e13, x10 = 10e13, x11 = 10e14, x12 = 10e15, x13 = 10e16;
	//B) (1+1/x)ˆx , x = 10e12, x = 10e13, x = 10e14, x = 10e15, x = 10e16, ...
//    double resultado1 = powf((1 + 1/x),x);
//
//    printf(" %lf ",resultado);
//    printf("\n");
//    printf(" %lf ",resultado1);

	return 0;
}