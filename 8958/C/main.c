#include <stdio.h>

#define MAS_QUESTION_NUM	80

int main( void )
{
	int test_case = 0;
	int i = 0, j = 0;
	int correct_cnt = 0;
	int continue_cnt = 0;
	char ans[MAS_QUESTION_NUM + 2];

	scanf( "%d", &test_case );

	for ( i = 0; i < test_case; i++ )
	{
		scanf( "%s", ans );

		correct_cnt = 0;
		continue_cnt = 1;

		for ( j = 0; j < MAS_QUESTION_NUM; j++  )
		{
			if ( ans[j] == '\0' )
			{
				break;
			}

			if ( ans[j] == 'O' )
			{
				if ( j == 0 )
				{
					correct_cnt++;
				}
				else if ( ans[j-1] != 'O' )
				{
					correct_cnt++;
					continue_cnt = 1;
				}
				else
				{
					continue_cnt++;
					correct_cnt += ( 1 * continue_cnt );
				}
			}
		}

		printf( "%d\n", correct_cnt );
	}

	return 0;
}
