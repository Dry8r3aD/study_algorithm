#include <stdio.h>

int main( void )
{
	char str = 0;

	while ( str != EOF )
	{
		str = getchar();

		if ( str == EOF )
		{
			break;
		}

		putchar( str );
	}

	return 0;
}
