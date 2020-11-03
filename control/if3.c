#include <stdio.h>

int main()
{
	int n1,n2;
	
	puts( "Introduzca el primer número: ");
	scanf ("\t%d", &n1);
	puts( "Introduzca el segundo número: ");
	scanf ("\t%d", &n2);
	
	if(n1 < n2){
		printf ("\t%d es mayor que %d\n", n2, n1);
	}else{
		printf ("\t%d es mayor que %d\n", n1, n2);
	}
	
	return 0;
	
}
