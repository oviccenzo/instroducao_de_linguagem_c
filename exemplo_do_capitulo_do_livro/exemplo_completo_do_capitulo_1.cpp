#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void hello_world(){

    printf("Hello, World!");
}

void hello_world_1(){
    // printf("hello, world!\n")
    //Main.c: In function 'hello_world_1':
    // Main.c:9:30: error: expected ';' before '}' token
    //9 |     printf("hello, world!\n")
    //. |                              ^
    //  |                              ;
   //10 | }
   //   | ~     
}

void insercao_de_comentario(){
    printf("h\n");
    /*printf("e\n");
    printf("l\n");
    printf("l\n");*/
    printf("o\n");
    printf("world\n");
}

int escreve_um_programa_que_calcula_o_pi(){
    /*Declaração de variáveis*/
    double pi1;
    float pi2;

    /*Atribuição de valores*/
    pi1 = 3.141592653589793238462643;
    pi2 = 3.141592653589793238462643;

    printf("p1i = %.20f\n",pi1);
    printf("pi2 = %.20f\n",pi2);
} 

void le_um_numero(){
    int x;
    printf("Informe um numero inteiro entre 0 e 9: \n");
    scanf("%d",&x);

    printf("X = %d\n",x);
}

void implementar_um_programa_que_le_um_numero(){
    double x = 8.62;

    printf("Biblioteca math.h \n\n");

    /*Os valores aproximado de baixo para cima*/
    printf("Valor aproximado para baixo de %f e %f\n",x,floor(x));
    printf("Valor aproximado para cima de %f e %f\n",x,ceil(x));

    /*Calculo de raiz quadrado e ou quadrado*/
    printf("Raiz ao quadrado de %f eh %f\n",x,sqrtf(x));
    printf("%.2lf ao quadrado eh %.2f\n",x,pow(x,2));

    /* Funções Trigonométricas */
    printf("Valor de seno de %.2f = %.2f\n",x,sin(x));
    printf("Valor de cosseno de %.2f = %.2f\n",x,cos(x));
    printf("Valor de tangante de %.2f = %.2f\n",x,tan(x));

    /*Calculo de Logaritmo*/
    printf("Logaritmo natural de %.2f = %.2f\n",x,log(x));
    printf("Logaritmo de %.2f na base 10 = %.2f \n",x ,log10(x));
    printf("Exponencial de %.2f = %e \n",x ,exp(x));

    printf("O módulo de -3.2 e %f\n",fabs(-3.2));
    printf("O modulo de -3 e %d\n",abs(-3));
}

void le_dois_numero_inteiro(){
    int a,b,resultado1;
    printf("Informe dois numeros inteiro a e b: \n");
    scanf("%d %d", &a,&b);

    resultado1 = a % b;

    printf("O resto da divisao do primeiro número pelo segundo eh = %d\n",resultado1);
}

void le_dois_numero_ponto_flutuante(){
    double a,b,resultado2;

    a = 1;
    b = 1e-8;
    resultado2 = a + b;
    printf("a = %.6lf, b = %.6lf, resultado2 = %.6lf\n",a,b,resultado2);
}

void le_dois_numero_ponto_flutuante_1(){
    double x,y,z;
    x = 2;
    y = 2;
    z = x + y;
    x = 1;
    y = 1;
    printf("X = %f, y = %f, z = %f\n",x,y,z);
}

void criar_um_progrma_para_que_ler_dois_numero(){
    double x,y,z;
    x = y = 2; 
    z = 1;
    printf("O resultado de %f == %f eh : %d\n",x,y,x==y);
    printf("O resultado de %f == %f eh : %d\n",x,y,x==z);
}

int main()
{   
    printf("Capitulo 1 Introdução a programação cientifica em linguagem C\n");
    printf("\n");
    printf("=== Exemplo 1.2.1 escreve um programa que exibir na tela hello world ===\n");
    hello_world();
    printf("\n");
    printf("\n");
    printf("=== Exemplo 1.2.2 escreve um programa que exibir na tela hello world com o erro ===\n");
    hello_world_1();
    printf("\n");
    printf("=== Exemplo 1.3 escreve um programa que exibir na tela hello world com o erro ===\n");
    insercao_de_comentario();
    printf("\n");
    printf("=== Exemplo 1.4 Variaveis ===\n");
    printf("=== Exemplo 1.4.1 imprimi a programa com o numero pi aproximado 3.141592653589793238462643 ===\n");
    escreve_um_programa_que_calcula_o_pi();
    printf("\n");
    printf("=== Exemplo 1.5 Scanf ===\n");
    printf("=== Exemplo 1.5.1 escreve um programa que le um numero entre 0 e 9 e depois imprimi-o ===\n");
    le_um_numero();
    printf("\n");
    printf("=== Exemplo 1.6 A biblioteca math.h ===\n");
    printf("=== Exemplo 1.6.1 implemente um programa para testar as funções seno , cosseno, tangante ===\n");
    implementar_um_programa_que_le_um_numero();
    printf("=== Exemplo 1.7 Operações entre inteiros e reais ===\n");
    printf("=== Exemplo 1.7.1 implemente um programa para le dois numeros inteiro e tomar o resto da divisao do 1 pelo 2 e imprimir o resultado ===\n");
    le_dois_numero_inteiro();
    printf("\n");
    printf("=== Exemplo 1.7.2 Escreve um programa que le dois float e imprime o resultado do soma de 1 e 10e-18 ===\n");
    le_dois_numero_ponto_flutuante();
    printf("\n");
    printf("=== Exemplo 1.7.2.1 Escreve um programa que le dois float e imprime o resultado do soma de 1 e 10e-18 ===\n");
    le_dois_numero_ponto_flutuante_1();
    printf("\n");
    printf("=== Exemplo 1.8 Operadores relacionais. Criar um programa para ler dois numeros com ponto flutuantes e testar o programa ===\n");
    criar_um_progrma_para_que_ler_dois_numero();

    return 0;

}
