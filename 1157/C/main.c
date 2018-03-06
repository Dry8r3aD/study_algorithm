#include <stdio.h>

#define MAX_WORD_LENGTH	1000000
#define ALPHABET_COUNT	26

int main( void )
{
	char str[MAX_WORD_LENGTH + 2] = { "", };
	int i = 0;
	int count_arr[ALPHABET_COUNT] = { 0, };
	char print_char = 0;

	scanf( "%s", str );

	while( str[i] != '\0' )
	{
		if ( (str[i] >= 97) && (str[i] <= 122) )
		{
			str[i] = str[i] - 32;
		}

		count_arr[str[i] - 65]++;
		i++;
	}

	for ( i = 0; i < ALPHABET_COUNT; i++ )
	{
		if ( count_arr[print_char - 65] < count_arr[i] )
		{
			print_char = i + 65;
		}
	}

	for ( i = 0; i < ALPHABET_COUNT; i++ )
	{
		if ( i != print_char - 65 && (count_arr[i] == count_arr[print_char - 65]) )
		{
			printf( "?\n" );
			return 0;
		}
	}

	printf( "%c\n", print_char );

	return 0;
}
