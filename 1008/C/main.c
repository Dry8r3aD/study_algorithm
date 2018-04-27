#include <stdio.h>

int main ( void )
{
	long double num1 = 0;
	long double num2 = 0;

	scanf( "%Lf %Lf", &num1, &num2 );

	printf( "%.25Lf\n", num1/num2 );

	return 0;
}
