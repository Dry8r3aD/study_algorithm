#include <stdio.h>

int main ( void )
{
	int num = 0;
	int calc = 0;

	scanf( "%d", &num );

	calc = ((num * 2) - 1);

	for ( int i = 1; i <= num; i++ )
	{
		for ( int j = 0; j < (num - i); j++ )
		{
			printf( " " );
		}

		for ( int j = 0; j < ((2 * i) - 1); j++ )
		{
			printf( "*" );
		}
		printf( "\n" );
	}

	for ( int i = num-1; i > 0; i-- )
	{
		for ( int j = 0; j < (num - i); j++ )
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
