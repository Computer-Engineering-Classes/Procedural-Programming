#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
		char z[20];
		int h, d, b;
		float l, inss, irs;
		 // "h" corresponde a horas, "d" a dependentes, "b" a salário bruto e "l" a salário líquido
		
		printf("\nInsira o seu nome: ");
		gets(z);
		
		printf("\nInsira o numero de horas trabalhadas: ");
		scanf("%d", &h);
		
		printf("\nInsira o numero de dependentes: ");
		scanf("%d", &d);
		
		b = h*12 + d*40;
		inss = b*0.085;
		irs = b*0.05;
		l = b - inss - irs;
		
		printf("\n\nNome do funcionario: %s", z);
		printf("\n\nSalario bruto: %d euros", b);
		printf("\n\nDescontos INSS: %.2f euros", inss);
		printf("\n\nDescontos IRS: %.2f euros", irs);
		printf("\n\nSalario liquido: %.2f euros\n\n", l);
		
		return 0;
		
}
