//
// Created by Robert L Resende on 15/12/25.
//
#include "cstdio"

int main(){

	double x,y,z;
	x = y = 2;
	z = 1;
	// 2 é igual a 2 e obtemos a resposta 1 foi verdadeira
	printf("O resultado de %f == %f é : %d\n", x , y ,x == y);

	// 2 é igual a 2 e obtemos a resposta 0 foi falso
	printf("O resultado de %f == %f é : %d\n", x , z , x == z);
}