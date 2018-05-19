#include <stdio.h>

int main ( void )
{
	int num_arr[1000] = { 0, };
	int num = 1;
	int num_cnt = 0;
	int a = 0, b = 0;
	int sum = 0;

	scanf( "%d %d", &a, &b );

	for ( int i = 0; i < 1000; i++ )
	{
		num_arr[i] = num;
		num_cnt++;

		if ( num_cnt == num )
		{
			num_cnt = 0;
			num++;
		}
	}

	for ( int i = a-1; i < b; i++ )
	{
		sum+= num_arr[i];
	}

	printf( "%d\n", sum );

	return 0;
}
