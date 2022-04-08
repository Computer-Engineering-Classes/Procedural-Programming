#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
		float fabrica, final;
		char z[20];
		
		printf("\nInsira o nome do automovel: ");
		gets(z);
	
		printf("\nInsira o preco de fabrica: ");
		scanf("%f", &fabrica);
	
		final = fabrica * 1.73; // 1.73 corresponde ao preco de fabrica mais 45% de impostos e 28% do revendedor
	
		printf("\n\nNome do automovel: %s\n\nPreco final: %.2f euros\n", z, final);
	
		return 0;
	
}
