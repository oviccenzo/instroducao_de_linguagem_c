//
// Created by Robert L Resende on 15/12/25.
//
/*Exercicio 1.9.10 Use uma identidade trignometrica
 * adequada para mostra:
 * 1 - cos(x)/xˆ2 = 1/2 *(sen(x/2)x/2)ˆ2
 * Analises o desempenho destas duas expresões no computador quando
 * x valr 10e-5, 10e-6 , 10e-7, 10e-8, 10e-9 e 10e-200 e 0.Discuta o resultado.
 * Dica: Para |x|*/

#include "cstdio"
#include "cmath"

int main(){

	double x = 1;
	double a = 1 - cos(x);
	double b = 1/2*pow((sin(x/2)),2);

}