#include <stdio.h>

int main ( void )
{
	int num = 0;

	scanf ( "%d", &num );

	for ( int i = 1; i <= num; i++ )
	{
		for ( int j = num; j > 0 ; j-- )
		{
			if ( j > i )
			{
				printf( " " );
				continue;
			}
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
