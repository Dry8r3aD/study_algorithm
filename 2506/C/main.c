#include <stdio.h>

#define		WRONG		0

int main ( void )
{
	int problem_cnt = 0;
	int	*problem_arr = NULL;
	int i = 0;
	int right_cnt = 0;
	int total_sum = 0;

	scanf( "%d", &problem_cnt );

	problem_arr = (int*) malloc( sizeof( int ) * problem_cnt );

	for ( i = 0; i < problem_cnt; i++ )
	{
		scanf("%d", &problem_arr[i] );

		if ( problem_arr[i] == WRONG )
		{
			right_cnt = 0;
			continue;
		}

		right_cnt = (1*right_cnt) + 1;

		total_sum += right_cnt;
	}

	printf( "%d \n", total_sum );

	return 0;
}
