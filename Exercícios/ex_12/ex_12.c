#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
	{
		int bytes;
		float kb, mb, gb, tb;
		
		printf("\nInsira o numero de bytes: ");
		scanf("%d", &bytes);
		
		if(bytes<1024)
		{
			printf("\n%d bytes\n\n", bytes);
		}
		
		if(bytes>=1024 && bytes<pow(1024, 2))
		{
			kb = bytes/1024.00;
			printf("\n%d bytes = %.2f KB\n\n", bytes, kb);
		}
		
		if(bytes>=pow(1024, 2) && bytes<pow(1024, 3))
		{
			mb = bytes/pow(1024.00, 2);
			printf("\n%d bytes = %.2f MB\n\n", bytes, mb);
		}
	
		if(bytes>=pow(1024, 3) && bytes<pow(1024, 4))
		{
			gb = bytes/pow(1024.00, 3);
			printf("\n%d bytes = %.2f GB\n\n", bytes, gb);
		}
	
		if(bytes>=pow(1024, 4) && bytes<pow(1024, 5))
		{
			tb = bytes/pow(1024.00, 4);
			printf("\n%d bytes = %.2f TB\n\n", bytes, tb);
		}
		
		system("pause");
		exit(0);
	}
