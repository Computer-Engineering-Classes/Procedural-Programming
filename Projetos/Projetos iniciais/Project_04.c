#include <stdio.h>	//incluir definicoes standard de entrada e saida
#include <stdlib.h>	//incluir definicoes da biblioteca standard

int main(void)
{
		int a, b, c;	//definir variaveis "a" e "b" e "c" do tipo inteiro
		
		/* Solicitar números ao utilizador */
		
		printf("\nInsira um numero: ");
		scanf("%d", &a);		// %d indica o formato
		printf("Insira outro numero: ");
		scanf("%d", &b);		
		
		printf("\n A soma: %d + %d = %d", a, b, a + b);		//escrever a, b e a+b
		
		c = a + b;
		printf("\n\n%d + %d = %d; Dobro: %d", a, b, c, 2*c);	//escrever a, b, c e dobro de c
		
		return 0;
}
