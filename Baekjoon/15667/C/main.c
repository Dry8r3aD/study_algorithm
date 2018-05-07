#include <stdio.h>

int main ( void )
{
	int fire_cnt = 0;
	int calc = 0;

	scanf( "%d", &fire_cnt );

	calc = fire_cnt - 1;	// calc = K + K*K

	for ( int i = 1; i > 0; i++ )
	{
		if ( (i + (i * i)) == calc )
		{
			printf( "%d\n", i );
			break;
		}
	}

	return 0;
}
