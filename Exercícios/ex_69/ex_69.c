#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int CompareFiles(FILE *fp1, FILE *fp2)
{
	int i=0;
	char c1, c2;
	
	c1=fgetc(fp1);
	c2=fgetc(fp2);
	
	while(c1!=EOF || c2!=EOF) {
		if(c1!=c2)
			return -1;
		c1=fgetc(fp1);
		c2=fgetc(fp2);
	}
	if(c1==c2 && c1==EOF)
		return 0;
	else
		return -1;
}
void main()
{
	char nome1[]="file1.txt";
	char nome2[]="file2.txt";
	FILE *fp1, *fp2;
	int n;
	
	fp1=fopen(nome1, "r");
	fp2=fopen(nome2, "r");
	
	setlocale(LC_ALL, "");
	
	n=CompareFiles(fp1,fp2);
	
	if(n==0)
		printf("\n\tOs ficheiros são iguais.");
	else
		printf("\n\tOs ficheiros são diferentes.");
			
	fclose(fp1);
	fclose(fp2);
}
