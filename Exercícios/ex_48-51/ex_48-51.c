#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void LerVetor(int*, int);
int SomaImpares(int *, int );
void MostrarVetor(int *, int );
int SomaIndImp(int *, int );

int main()
{
	int *v, n;
	// srand(time(NULL));
	
	printf("\n Tamanho do Vetor = ");
	scanf("%d", &n);

	v=(int*)malloc(n*sizeof(int));
	
	LerVetor(v, n);
	putchar('\n');
	MostrarVetor(v, n);
	
	printf("\n Soma dos elementos impares = %d\n", SomaImpares(v, n));
	printf("\n Soma dos elementos em posicoes de indice impar = %d\n", SomaIndImp(v, n));
	
	return 0;
}

void LerVetor(int *v, int n)
{
	int i;
	for(i=0; i<n; i++)
	{
	printf("\n v[%d] = ", i);
	scanf("%d", &v[i]);
	}
}
void MostrarVetor(int *v, int n)
{
	int i;
	for(i=0; i<n; i++)
	{
	//	v[i]=rand();
		printf(" v[%d] = %d\n", i, v[i]);
	}
}

int SomaImpares(int *v, int n)
{
	int i, soma=0;
	for(i=0; i<n; i++)
	{
		if(v[i]%2!=0)
		soma+=v[i];
	}
	return soma;
}

int SomaIndImp(int *v, int n)
{
	int i, soma=0;
	for(i=0; i<n; i++)
	{
		if(i%2!=0)
		soma+=v[i];
	}
	return soma;
}

