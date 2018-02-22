#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	int tc_cnt = 0;
	int student_cnt = 0;
	int *grade_arr = NULL;
	int total_score = 0;
	double avg_score = 0;
	int over_avg_student_cnt = 0;
	int i = 0, j = 0, k = 0;

	scanf( "%d", &tc_cnt );

	for ( i = 0; i < tc_cnt; i++ )
	{
		scanf( "%d", &student_cnt );
		grade_arr = (int *)malloc( sizeof(int) * student_cnt );

		for ( j = 0; j < student_cnt; j++ )
		{
			scanf( "%d", &grade_arr[j] );
			total_score += grade_arr[j];
		}

		avg_score = ((double)total_score / (double)student_cnt);

		for ( k = 0; k < student_cnt; k++ )
		{
			if ( (double)grade_arr[k] > avg_score )
			{
				over_avg_student_cnt++;
			}
		}

		printf( "%.3f%\n", ((double)over_avg_student_cnt / (double)student_cnt) * 100 );

		over_avg_student_cnt = 0;
		total_score = 0;
		free( grade_arr );
	}

	return 0;
}
