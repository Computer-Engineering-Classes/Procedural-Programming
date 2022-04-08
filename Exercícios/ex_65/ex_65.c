#include <stdio.h>
#include <stdlib.h>

void File001()
{
	FILE *file = NULL;
	char filename[]="dados.txt";
	int i=0;
	file = fopen(filename, "w");
	if(file==NULL)
		exit(0);
	for(i=1; i<=10; i++)
		fprintf(file, "Ola Mundo!\n");
	fclose(file);
}

int main()
 {
 	File001();
 }
