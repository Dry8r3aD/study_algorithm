#include <stdio.h>

int main ( void )
{
	int num = 0;

	scanf( "%d", &num );

	for ( int i = 0; i < num; i++ )
	{
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
