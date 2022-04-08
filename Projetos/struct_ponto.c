#include <stdio.h>

typedef struct ponto {
	float x;
	float y;
}Ponto;

int pointcmp(Ponto a, Ponto b)
{
	if(a.x==b.x && a.y==b.y)
		return 0;
	else
		return -1;
}
void main()
 {
 	Ponto p[2];
 	
 	printf("\n Ponto A coordenadas (x e y): ");
 	scanf("%f %f", &p[0].x, &p[0].y);
 	
 	printf("\n Ponto B coordenadas (x e y): ");
 	scanf("%f %f", &p[1].x, &p[1].y);
 	
 	if(pointcmp(p[0],p[1])==0)
 		printf("\n O Ponto A(%.2f,%.2f) e igual ao ponto B(%.2f,%.2f).\n", p[0].x, p[0].y, p[1].x, p[1].y);
 	else
 		printf("\n O Ponto A(%.2f,%.2f) e diferente do ponto B(%.2f,%.2f).\n", p[0].x, p[0].y, p[1].x, p[1].y);
 }
