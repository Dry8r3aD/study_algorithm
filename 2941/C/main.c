#include <stdio.h>

#define	MAX_WORD_LENGTH		100

int main( void )
{
	char str[MAX_WORD_LENGTH + 1];
	int i = 0;
	int word_cnt = 0;

	scanf( "%s", str );

	while ( str[i] != '\0' )
	{
		word_cnt++;

		if ( str[i] == 'c' && (str[i+1] == '=' || str[i+1] == '-') )
		{
			i++;
		}
		else if ( str[i] == 'd' )
		{
			if ( (str[i+1] == '-') )
			{
				i++;
			}
			else if ( str[i+1] == 'z' && str[i+2] == '=' )
			{
				i += 2;
			}
		}
		else if ( str[i] == 'l' && str[i+1] == 'j' )
		{
			i++;
		}
		else if ( str[i] == 'n' && str[i+1] == 'j' )
		{
			i++;
		}
		else if ( str[i] == 's' && str[i+1] == '=' )
		{
			i++;
		}
		else if ( str [i] == 'z' && str[i+1] == '=' )
		{
			i++;
		}

		i++;
	}

	printf( "%d\n", word_cnt );

	return 0;
}
