#include <stdio.h>
#include <stdlib.h>

float * LoadArray(char *file, int *n)
{
	FILE *fp;
	int i;
	float *v=NULL;
	
	if((fp=fopen(file, "r"))!=NULL)
	{
		fscanf(fp, "%d", n);
		if((v=(float*)malloc(*n*sizeof(float)))!=NULL)
		for(i=0; i<*n; i++)
			fscanf(fp, "%f", &v[i]);
			fclose(fp);
	}
	return v;
}

int SaveArray(char *file, float *V, int n)
{
	
}
