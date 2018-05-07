#include <stdio.h>

int main ( void )
{
	int num = 0;

	scanf( "%d", &num );

	for ( int i = num; i > 0 ; i-- )
	{
		for ( int j = 0; j < num - i; j++ )
		{
			printf( " " );
		}

		for ( int j = ((i * 2) - 1); j > 0; j-- )
		{
			printf( "*" );
		}

		printf( "\n" );
	}

	for ( int i = 2; i < (num + 1); i++ )
	{
		for ( int j = num; j > i; j-- )
		{
			printf( " " );
		}

		for ( int j = 0; j < ((i * 2) - 1); j++ )
		{
			printf( "*" );
		}
		printf( "\n" );
	}

	return 0;
}


