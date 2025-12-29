//
// Created by viccenzo  Resende on 15/12/25.
/*Exercico 1.9.6 Escreva um programa que calcula
 * a área e o perímetro de um cículo de raio r*/

#include "cstdio"
#include <cmath>
#define PI 3.1415926536


int main(){
	float area,raio;

	printf("Digite o raio: ");
	scanf("%f",&raio);

	float res1 = PI * (raio*raio);
	float res2 = 2 * PI * raio;

	printf(" eh %2.f", res1);
	printf("\n");
	printf("eh %.2f", res2);

	return 0;
}