#include <stdio.h>

int main ( void )
{
	int tc_cnt = 0;
	int a = 0, b = 0;

	scanf( "%d", &tc_cnt );

	for ( int i = 0; i < tc_cnt; i++ )
	{
		scanf( "%d %d", &a, &b );
		printf( "Case #%d: %d\n", i + 1, a + b );
	}

	return 0;
}
