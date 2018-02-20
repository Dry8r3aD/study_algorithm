#include <stdio.h>

int main( void )
{
	int num_arr[3] = {0, };
	int ret = 0;
	int i = 0, j = 0;

	scanf( "%d %d %d", &num_arr[0], &num_arr[1], &num_arr[2] );

	for ( i = 0; i < 3; i++ )
	{
		for ( j = 0; j < i; j++ )
		{
			if ( num_arr[i] < num_arr[j] )
			{
				ret = num_arr[i];
				num_arr[i] = num_arr[j];
				num_arr[j] = ret;
			}
		}
	}

	printf("%d \n", num_arr[1] );

	return 0;
}
