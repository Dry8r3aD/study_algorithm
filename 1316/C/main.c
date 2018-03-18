#include <stdio.h>

#define ALPHABET_CNT	26

int main( void )
{
	int word_cnt = 0;
	int group_word_cnt = 0;

	scanf( "%d", &word_cnt );

	for ( int i = 0; i < word_cnt; i++ )
	{
		int alphabet_check_arr[ALPHABET_CNT] = { 0, };
		char str[100];
		int non_group_flag = 0;

		scanf( "%s", str );

		for ( int j = 0; str[j] != '\0'; j++ )
		{
			if ( alphabet_check_arr[str[j] - 97] != 0 && str[j-1] != str[j] )
			{
				non_group_flag = 1;
				break;
			}

			alphabet_check_arr[str[j] - 97] = 1;
		}

		if ( non_group_flag )
		{
			continue;
		}

		group_word_cnt++;
	}

	printf( "%d\n", group_word_cnt );

	return 0;
}
