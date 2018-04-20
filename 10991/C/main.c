#include <stdio.h>
#include <stdbool.h>

#define PRINT_SPACE()	\
	printf( "_" );		\
	continue;

#define PRINT_STAR()	\
	printf( "*" );		\
	continue;

int main ( void )
{
	int num = 0;

	scanf( "%d", &num );

	for ( int i = num; i > 0; i-- )
	{
		for ( int j = 1; j <= ((num * 2) - 1); j++ )
		{
			if ( i + j > (num * 2) )
			{
				break;
			}

			if ( i > j  )
			{
				PRINT_SPACE();
			}

			if ( i % 2 == true ) // Even
			{
				if ( j % 2 == false )
				{
					PRINT_SPACE();
				}
				PRINT_STAR();
			}
			else // Odd
			{
				if ( j % 2 == false )
				{
					PRINT_STAR();
				}
				PRINT_SPACE();
			}
		}
		printf( "\n" );
	}

	return 0;
}
