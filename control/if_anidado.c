#include <stdio.h>

int main()
{
    float n1, n2, n3;

    printf( "%s","Introduzca el primer numero: ");
    scanf( "%f", &n1 );
    printf( "%s","Introduzca el segundo numero: ");
    scanf( "%f", &n2 );
    printf( "%s","Introduzca el primer numero: ");
    scanf( "%f", &n3 );

//    if ( n1 == n2){
//    	if (n2 ==n3){// if else-is, else
//    		printf ("\n %.2f, %.2f y %.2f son iguales.\n", n1, n2, n3);
//		}
//	}

	if (n1 == n2 && n2== n3){ //if. else-is, else 
		printf ("\n %.2f, %.2f y %.2f son iguales.\n", n1, n2, n3);
	}else if( n1 >= n2 && n1 >= n3){
		printf ("\n %.2f es el mayor.\n", n1); 
	}else{
		if (n2 > n3){//if anidados
			printf ("\n %.2f es el mayor.\n", n2);	
		}else{
			printf ("\n %.2f es el mayor.\n", n3);
		}
		
	}  
    return 0;
}
