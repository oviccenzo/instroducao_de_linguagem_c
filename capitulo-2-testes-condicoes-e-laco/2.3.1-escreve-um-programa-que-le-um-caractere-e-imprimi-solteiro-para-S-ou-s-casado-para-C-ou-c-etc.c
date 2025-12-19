//
// Created by Robert L Resende on 19/12/25.
//
#include <cstdio>

int main(){
	char estadoCivil;
	printf("Entre com seu estado civil: \n");
	scanf("%c",&estadoCivil);
	switch(estadoCivil){
		case 's':
		case 'S':
			printf("solteiro(a)\n");
			break;
		case 'C':
		case 'c':
			printf("casado(a)\n");
			break;
		case 'V':
		case 'v':
			printf("viuvo(a)\n");
			break;
		case 'D':
		case 'd':
			printf("divorciado\n");
			break;
		default:
			printf("nao informou/outro\n");
			break;
	}
}