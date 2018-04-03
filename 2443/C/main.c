#include <stdio.h>

int main ( void )
{
	int num = 0;

	scanf( "%d", &num );

	for ( int i = num; i > 0; i-- )
	{
		for ( int j = num; j > i; j-- )
		{
			printf( " " );
		}

		for ( int j = 0; j < ((2 * i) - 1); j++ )
		{
			printf( "*" );
		}
		printf( "\n" );
	}

	return 0;
}
