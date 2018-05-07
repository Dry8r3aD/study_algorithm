#include <stdio.h>

int main ( void )
{
	int num = 0;

	scanf( "%d", &num );

	for ( int i = num; i > 0; i-- )
	{
		for ( int j = 1; j <= num; j++ )
		{
			if ( j >= i )
			{
				printf( "*" );
				continue;
			}

			printf( " " );
		}
		printf( "\n" );
	}

	for ( int i = 0; i < (num - 1); i++ )
	{
		for ( int j = 0; j < num; j++ )
		{
			if ( i >= j )
			{
				printf( " " );
				continue;
			}

			printf( "*" );
		}
		printf( "\n" );
	}

	return 0;
}
