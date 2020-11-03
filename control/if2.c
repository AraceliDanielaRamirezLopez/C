#include <stdio.h>
int main()
{
	int edad;//variable 
	printf("Introduce tu edad: ");
	scanf("%d",&edad);//lectura de teclado 

	if (edad >17 && edad <35)
	{
		 printf("Tienes %d anios, eres mayor de edad\n",edad);
	}
	else if (edad < 17)
	{
		 printf("Tienes %d anios, eres menor de edad\n",edad);
	}
	else if (edad >= 35 && edad <= 60)
	{
		 printf("Tienes %d anios, eres chavo-ruco\n",edad);
	}
	else
	{
		 printf("Tienes %d anios, ",edad);
	}
  return 0;
} 	
