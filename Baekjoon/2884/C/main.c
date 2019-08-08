#include <stdio.h>

int main ( void )
{
	int h = 0, m = 0;

	scanf( "%d %d", &h, &m );

	if ( m < 45 )
	{
		h--;

		if ( h == -1 )
			h = 23;

		m = 15 + m; // (60-45+m)
	}
	else
	{
		m = m - 45;
	}


	printf( "%d %d\n", h, m );

	return 0;
}
