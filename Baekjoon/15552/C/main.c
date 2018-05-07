#include <stdio.h>

#define SUM( a, b ) a+b

int main ( void )
{
	int tc_num = 0;
	int i = 0;

	scanf( "%d", &tc_num );

	for ( i = 0; i < tc_num; i++ )
	{
		int num1 = 0, num2 = 0;
		scanf( "%d %d", &num1, &num2 );
		printf( "%d\n", SUM( num1, num2 ) );
	}

	return 0;
}
