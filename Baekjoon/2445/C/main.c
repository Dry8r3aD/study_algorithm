#include <stdio.h>

int main( void )
{
	int num = 0;

	scanf( "%d", &num );

	for ( int i = 0; i < num; i++ )
	{
		for ( int j = 0; j < num; j++ )
		{
			if ( i >= j )
			{
				printf( "*" );
				continue;
			}

			printf( " " );
		}

		for ( int j = num; j > 0; j-- )
		{
			if ( i+1 >= j )
			{
				printf( "*" );
				continue;
			}

			printf( " " );
		}

		printf( "\n" );
	}

	for ( int i = 1; i < num; i++ )
	{
		for ( int j = num; j > 0; j-- )
		{
			if ( j <= i )
			{
				printf( " " );
				continue;
			}
			printf( "*" );
		}

		for ( int j = 0; j < num; j++ )
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

	return 0;
}
