//
// Created by Robert L Resende on 15/12/25.
//
/* Exercicio 1.9.9 Considere as expressões:
 * Exp( 1/ μ) / 1 + exp( 1 / μ)*
 * e
 * 1 / exp(-1/μ) + 1
 * Com μ > 0.Verifique qu elas são idênticas como funções reais.Teste no computador cada uma delas para
 * μ = 0,1 e μ = 0,001. Qual dessas expressões é mais adequada quando μ é um número pequeno?Por que?*/
#include "cstdio"
#include "cmath"

int main(){
	double u1 = 1, u2 = 0.01, u3 = 0.001;

	double resultado1 = exp(1/u1) /  1 + exp(1/u1);
	double resultado2 = exp(1/u2) / 1 + exp(1/u2);
	double resultado3 = exp(1/u3) / 1 + exp(1/u3);

	printf(" %lf \n", resultado1);
	printf(" %lf\n ", resultado2);
	printf(" %lf\n", resultado3);

	return 0;
}