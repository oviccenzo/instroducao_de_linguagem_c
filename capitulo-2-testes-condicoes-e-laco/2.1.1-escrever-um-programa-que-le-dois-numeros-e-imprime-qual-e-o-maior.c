//
// Created by Robert L Resende on 15/12/25.
//
#include <cstdio>

int main(){
	float x,y;
	printf("Digite o valor de x: ");
	scanf("%f",&x);
	printf("Digite o valor de y: ");
	scanf("%f",&y);

	if(x >= y){
		printf("x eh maior ou igual a y\n");
	}else{
		printf("x menor que y\n");
	}
}