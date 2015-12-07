#include <stdio.h>
int matriz[3][3],vector[3],b,var,i,j;
int main()
{
	printf("dame los 3 vectores :\n");
	scanf("%d",&vector[0]);
	scanf("%d",&vector[1]);
	scanf("%d",&vector[2]);
	printf("ingresa la matriz");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)	
		{
			printf("Digita el numero en la posicion %d,%d\n",i,j);
			scanf("%d",&b);
			matriz[i][j]=b;
		}
	}	
	printf("\n");
	printf("esta es la matriz multiplicada por el vector\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			var=matriz[i][j]*vector[i];
			printf("%d",var);
		}
	printf("\n");

	}	
}
