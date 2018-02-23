#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	int class_cnt = 0;
	double *grade_arr = NULL;
	int i = 0, j = 0;
	double tmp = 0;
	double total_score = 0;

	scanf( "%d", &class_cnt );

	grade_arr = (double *)malloc( sizeof(double) * class_cnt );

	for ( i = 0; i < class_cnt; i++ )
	{
		scanf( "%lf", &grade_arr[i] );
	}

	for ( i = 0; i < class_cnt; i ++ )
	{
		for ( j = 0; j < i; j++ )
		{
			if ( grade_arr[j] > grade_arr[i] )
			{
				tmp = grade_arr[i];
				grade_arr[i] = grade_arr[j];
				grade_arr[j] = tmp;
			}
		}
	}

	for ( i = 0; i < class_cnt; i++ )
	{
		if ( grade_arr[i] == 0 )
		{
			continue;
		}

		grade_arr[i] = (double)((grade_arr[i]/grade_arr[class_cnt-1]) * 100);
		total_score += grade_arr[i];
	}

	printf( "%.2f\n", total_score/class_cnt );

	return 0;
}
