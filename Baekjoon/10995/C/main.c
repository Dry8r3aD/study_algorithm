#include <stdio.h>

int main ( void )
{
	int num = 0;

	scanf( "%d", &num );

	for ( int i = 1; i <= num; i++ )
	{
		int star_cnt = 0;

		for ( int j = 1; j <= (num * 2); j++ )
		{
			if ( star_cnt >= num )
			{
				break;
			}

			if ( (i + j) % 2 == 0 )
			{
				printf( "*" );
				star_cnt++;
				continue;
			}

			printf( "_" );
		}

		printf( "\n" );
	}

	return 0;
}
