//
// Created by Robert L Resende on 15/12/25.
//
#include <cstdio>

int main(){
	int x,y,aux;
	printf("Digite o valor de x: \n");
	scanf("%d", &x);
	printf("Digite o valor de y: \n");
	scanf("%d", &y);

	if(x < y){
		aux = x;
		x = y;
		y = aux;
	}

	printf("O resultado de dois numeros inteiro eh %d %d\n", x,y);
}