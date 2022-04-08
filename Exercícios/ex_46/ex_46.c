#include <stdio.h>
#include <math.h>

void soma(int,int,int,int,int*,int*);

int main()
{
	int a, b, c, d, x=0, y=0;
	
	printf("\n a/b = ");
	scanf("%d/%d", &a, &b);
	
	printf("\n c/d = ");
	scanf("%d/%d", &c, &d);
	
	soma(a,b,c,d, &x, &y);
	
	printf("\n %d/%d + %d/%d = %d/%d\n\n", a, b, c, d, x, y);
}

void soma(int a, int b, int c, int d, int *x, int *y)
{
	int n=mmc(b, d);
	*x=a*n/b+c*n/d;
	*y=n;
	int n1=mdc(*x, *y);
	*x=*x/n1;
	*y=*y/n1;
}
int mdc(int x, int y)
{
	int i, k=1;
	if(y<x)
		trocar(&x, &y);
	
	for(i=2; i<=x; i++)
	{
		if(x%i==0 && y%i==0)
			k=i;
	}
	return k;
}

int trocar(int *x, int *y)
{
	int aux;
	aux=*x;
	*x=*y;
	*y=aux;
}

int mmc(int x, int y)
{
	return (x*y)/mdc(x, y);
}
