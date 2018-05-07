#include <stdio.h>

#define ALPHABET_CNT		26
#define MAX_WORD_LENGTH		100
#define	ASCII_CONVERT_NUM	97

int main ( void )
{
	int alpabet_cnt[ALPHABET_CNT] = { 0, };
	char word[ MAX_WORD_LENGTH + 1 ] = { 0, };
	int i = 0;

	scanf( "%s", word );

	while ( word[i] != '\0' )
	{
		char word_letter = word[i];
		alpabet_cnt[ word_letter - ASCII_CONVERT_NUM ]++;

		i++;
	}

	for ( int j = 0; j < ALPHABET_CNT; j++ )
	{
		printf( "%d", alpabet_cnt[j] );

		if ( j == ALPHABET_CNT - 1 )
		{
			break;
		}
		printf( " " );
	}
	printf( "\n" );

	return 0;
}
