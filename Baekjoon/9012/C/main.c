#include <stdio.h>
#include <stdbool.h>

#define MAX_CHAR_LENGTH	50
#define PRINT_STR_YES	"YES"
#define PRINT_STR_NO	"NO"

int main ( void )
{
	int tc_cnt = 0;

	scanf( "%d", &tc_cnt );

	for ( int i = 0; i < tc_cnt; i++ )
	{
		char str[ MAX_CHAR_LENGTH + 1 ] = { 0, };
		int open_cnt = 0, close_cnt = 0;

		scanf( "%s", str );

		for ( int j = 0; j < MAX_CHAR_LENGTH; j++ )
		{
			if ( str[j] == '\0' )
			{
				break;
			}

			if (( j == 0 && str[j] == ')') || open_cnt < 0 )
			{
				open_cnt = 100;
				break;
			}

			if ( str[j] == '(' )
			{
				open_cnt++;
			}
			else if ( str[j] == ')' )
			{
				open_cnt--;
			}
		}

		printf( "%s\n", (open_cnt == 0) ? PRINT_STR_YES : PRINT_STR_NO );
	}

	return 0;
}
