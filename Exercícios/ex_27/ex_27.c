#include <stdio.h>

int main()
{
	int i, max;
	float media = 0.00;
	
	printf("\n Insira o numero de elementos para os quais pretende calcular a media: ");
	scanf("%d", &max);
	
	float arr[max];
	
	for (i=0; i<max; i++)
	{
		printf("Introduza o valor: ");
		scanf("%f", &arr[i]);
		media += arr[i];
	}
	
	media = media / max;
	
	if (media > max)
	{
		media = max;
	}
	
	printf("\n A media e' %.2f.\n\n", media);
	
	return 0;
}
