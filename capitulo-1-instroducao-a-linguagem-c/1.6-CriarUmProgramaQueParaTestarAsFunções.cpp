//
// Created by Robert L Resende on 15/12/25.
//
#include <cstdio>
#include <csmath>
#include "cstdlib"

int main(){
	int main(){

		//Valor inserido para calcular 8.62
		double x = 8.62;

		//biblioteca matematica
		printf("biblioteca math.h\n\n");

		//Valor aproximado para cima e valor aproximado de baixo
		printf("Valor aproximado para baixo de %f é %f\n",x, floor(x));
		printf("Valor aproximado para cima %f é %f\n",x,ceil(x));

		//Calculo de raiz quadrado e raiz ao quadrado
		printf("Raiz quadrado de %f é %f\n",x, sqrt(x));
		printf("%.2lf ao quadrado é %.2f\n",x, pow(x,2));

		//Calculo de trigonometria
		printf("Valor de seno de %.2f = %.2f\n",x,sin(x));
		printf("Valor de cosseno de %.2f = %.2f\n",x,cos(x));
		printf("Valor de tangente de %.2f = %.2f\n",x,tan(x));

		//calculo do logaritmo natural e na base 10
		printf("Logaritmo natural de %.2f = %.2f\n",x,log(x));
		printf("Logaritmo de %.2f na base 10 = %.2f\n",x,log10(x));
		printf("Exponencial %.2f = %e\n",x,exp(x));

		//calculo aproximado do pi
		printf("O valor aproximado de pi é %e\n",M_PI);
		printf("O valor aproximado de pi/2 é %e\n",M_PI_2);

		//modulo do valor
		printf("O modulo de -3.2 é %f\n", fabs((-3.2)));
		printf("O modulo de -3 é %d\n", abs(-3));

		return 0;
}