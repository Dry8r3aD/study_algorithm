#include <stdio.h>

int main ( void )
{
	int yr = 0;

	scanf( "%d", &yr );

	if ( yr % 400 == 0 )
	{
		printf( "1\n" );
		return 0;
	}
	else if ( yr % 4 == 0 )
	{
		if ( yr % 100 != 0 )
		{
			printf( "1\n" );
			return 0;
		}
	}

	printf( "0\n" );

	return 0;
}
