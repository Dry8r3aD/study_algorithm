#include <stdio.h>

int main ( void )
{
	int num = 0;
	int star_cnt = 0;

	scanf( "%d", &num );

	for ( int i = 1; i <= (num * 2); i++ )
	{
		for ( int j = 1; j <= num; j++ )
		{
			if ( (i+j) % 2 == 0 )	// Even
			{
				printf( "*" );

				if ( j == (num-1) )
				{
					break;
				}
			}
			else 	// Odd
			{
				printf( " " );
			}
		}

		printf( "\n" );
	}

	return 0;
}
