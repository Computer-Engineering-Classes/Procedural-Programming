#include <stdio.h>	//incluir definicoes standard de entrada e saida
#include <stdlib.h>	//incluir definicoes da biblioteca standard
#include <math.h>

int main(void)
{
		float A, base, altura;
		
		/* solicitar valores ao utilizador */
		printf("\nInsira o valor da base do triangulo (cm): ");
		scanf("%f", &base);		// %f numero com casas decimais
		printf("Insira o valor da altura do triangulo (cm): ");
		scanf("%f", &altura);	
		
		/* calculo do volume */	
		A = (base * altura)/2;
		
		/* devolver o resultado ao utilizador no terminal */
		printf("\nArea = %.2f cm^2\n\n", A);
		
		system("pause"); // ask the system to pause before exiting
		exit(0);
}
