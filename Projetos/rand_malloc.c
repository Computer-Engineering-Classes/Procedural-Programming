#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dim, *a, *b, *V, c;
	
	printf("\n Introduza o numero de elementos que pretende gerar: ");
	scanf("%d", &dim);
	
	if((V=(int*)malloc(dim*sizeof(int)))==NULL)
		return -1;
	
	for(a=V; a<V+dim; a++)
		*a=rand()%500;
	
	b=a-1;
	
	for(a=V; a<V+dim; a++, b--)
		printf("%d\t%d\n", *a, *b);
		
	b=V+dim-1;
	
	for(a=V; a<V+dim/2; a++, b--)
	{
		c=*a;
		*a=*b;
		*b=c;
	}
	printf("\n\n###################################################\n\n");
	
	for(a=V; a<V+dim; a++, b--)
		printf("%d\n", *a);
	free(V);
}
