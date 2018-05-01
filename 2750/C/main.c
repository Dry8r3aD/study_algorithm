#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
	int num_cnt = 0;
	int *num_arr = NULL;

	scanf ( "%d", &num_cnt );
	num_arr = (int *)malloc( sizeof(int) * num_cnt );

	for ( int i = 0; i < num_cnt; i++ )
	{
		scanf( "%d", &num_arr[i] );
	}

	for ( int i = 0; i < num_cnt; i++ )
	{
		for ( int j = 0; j < i; j++ )
		{
			if ( num_arr[j] > num_arr[i] )
			{
				int tmp = 0;
				tmp = num_arr[i];
				num_arr[i] = num_arr[j];
				num_arr[j] = tmp;
			}
		}
	}

	for( int i = 0; i < num_cnt; i++ )
	{
		printf( "%d\n", num_arr[i] );
	}

	return 0;
}
