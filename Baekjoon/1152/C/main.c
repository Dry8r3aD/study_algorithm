#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define	MAX_WORD_NUM			1000000
#define ASCII_NUM_FOR_SPACE		32
#define ASCII_NUM_FOR_NEW_LINE	10

int main( void )
{
	char str[MAX_WORD_NUM + 2];
	int i = 0;
	int space_cnt = 0;

	memset( str, 0x00, sizeof(char) * MAX_WORD_NUM );

	fgets( str, sizeof(str), stdin );

	while ( str[i] != '\0' )
	{
		if ( i == 0 && str[i] == ASCII_NUM_FOR_SPACE && str[i+1] == ASCII_NUM_FOR_NEW_LINE )
		{
			printf( "0\n" );
			return 0;
		}

		if ( i != 0 && str[i] == ASCII_NUM_FOR_SPACE && str[i+1] != ASCII_NUM_FOR_NEW_LINE )
		{
			space_cnt++;
		}
		i++;
	}

	printf ( "%d\n", space_cnt+1 );

	return 0;
}
