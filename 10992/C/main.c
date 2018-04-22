#include <stdio.h>

int main ( void )
{
	int num = 0;
	int loop_cnt = 2;

	scanf( "%d", &num );

	for ( int i = num; i > 0; i-- )
	{
		for ( int j = 1; j <= i; j++ )
		{
			if ( i == j )
			{
				printf( "*" );
				break;
			}
			printf( " " );
		}

		if ( i == num )
		{
			printf( "\n" );
			continue;
		}

		for ( int j = 1; j > 0; j++ )
		{
			if ( j == loop_cnt )
			{
				printf( "*" );
				loop_cnt += 2;
				break;
			}

			if ( i == 1 )
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
