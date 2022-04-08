#include <stdio.h>

int main()
{
	int valido=1;
	float a, b, c;
	char z;
	
	printf("\nInsira a operacao que pretende determinar: ");
	scanf("%f %c %f", &a, &z, &b);
	
	switch (z)
	{
		case '+' :
			c = a + b;
			break;
		case '*' :
			c = a * b;
			break;
		case '-' :
			c = a - b;
			break;
		case '/' :
			if (b==0)
				printf("\nA divisao por zero nao e' possivel.\n");
			else
				c = a / b;
			break;
		default :
			valido = 0;
	}
	
	if (valido==1)
		printf("\n%.2f %c %.2f = %.2f\n", a, z, b, c);
	else
		printf("\nA operacao introduzida nao e' valida.\n");
	
	return 0;
}
