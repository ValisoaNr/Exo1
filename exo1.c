#include<stdio.h>

int main ()
{
	int a ;
	
	printf("\tTESTER LE SIGNE D'UN NOMBRE\nEntrer le nombre :");//Presentation du programme
	scanf("%d",&a);
	
	if (a>=0) //positive si superieur ou egale 0
 	{
		printf("C'est un nombre positive \n");
	}
	
		else
		{
			printf("C'est un nombre negative \n");
		}
		
	return (0);
}
