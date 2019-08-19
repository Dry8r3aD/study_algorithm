#include <stdio.h>

int main ( void )
{
	int num = 0;

	scanf( "%d", &num );

	for ( int i = 1; i <= num; i++ )
	{
		int a = 0, b = 0;

		scanf( "%d %d", &a, &b );
		printf( "Case #%d: %d + %d = %d\n", i, a, b, a + b );
	}

	return 0;
}
