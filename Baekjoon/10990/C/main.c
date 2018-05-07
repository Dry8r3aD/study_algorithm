#include <stdio.h>

int main ( void )
{
	int num = 0;

	scanf( "%d", &num );

	for ( int i = num; i > 0; i-- )
	{
		for ( int j = 1; j <= num; j++ )
		{
			if ( i == j )
			{
				printf( "*" );
				if ( i == num )
				{
					break;
				}
				continue;
			}

			printf( " " );
		}

		if ( i == num )
		{
			printf( "\n" );
			continue;
		}

		for ( int j = (num-1); j > 0; j-- )
		{
			if ( i == j )
			{
				printf( "*" );
				break;
			}

			printf( " " );
		}

		printf( "\n" );
	}

	return 0;
}
