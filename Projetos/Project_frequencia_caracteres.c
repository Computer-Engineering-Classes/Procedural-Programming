#include <stdio.h>

int main()
{
	char str[1001], ch;
	int i, frequencia = 0;
	
	printf("\nTexto (ate' 1000 letras): ");
	gets(str);
	
	printf("\nInsira um caractere para determinar a frequencia: ");
	scanf("%c", &ch);
	
	for (i=0; str[i] != '\0'; ++i)
	{
		if(ch == str[i])
			++frequencia;
	}
	
	printf("\nFrequencia de %c = %d\n", ch, frequencia);
	
	return 0;
}


