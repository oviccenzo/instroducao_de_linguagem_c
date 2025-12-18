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
	double u = 1, u1 = 0.01, u2 = 0.001;

	double resultado = exp(1/u) /  (1 + exp(1/u));
	double resultado1 = exp(1/u1) / (1 + exp(1/u1));
	double resultado2 = exp(1/u2) / (1 + exp(1/u2));
	printf("O resultado do numero exp(1/u) / (1 + exp(1/u)) eh: %lf\n"
			,resultado);
	printf("O resultado1 do numero exp(1/u1) / (1 + exp(1/u1)) eh: %lf\n "
			,resultado1);
	printf("O resultado2 do numero exp(1/u2) / (1 + exp(1/u2)) eh: %lf\n\n"
			,resultado2);

	double u3 = 1 , u4 = 0.01 , u5 = 0.001;
	double resultado3 = 1 / ((exp(-1/u3)) + 1);
	double resultado4 = 1 / ((exp(-1/u4)) + 1);
	double resultado5 = 1 / ((exp(-1/u5)) + 1);
	printf("O resultado3 do numero 1 / (exp(-1/u3) + 1): %lf\n", resultado3);
	printf("O resultado4 do numero 1 / (exp(-1/u4) + 1): %lf\n",  resultado4);
	printf("O resultado5 do numero 1 / (exp(-1/u5) + 1): %lf\n",  resultado5);

	return 0;
}