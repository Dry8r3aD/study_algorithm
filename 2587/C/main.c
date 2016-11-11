#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main ( void )
{
	int 		i = 0, j = 0;
	int			tmp_num = 0;
	int			avg = 0;
	int			num[5] = {0};
	int			mid = 0;

	// 입력 값 저장
	for ( i = 0; i < 5; i++ )
	{
		scanf( "%d", &num[i] );
	}

	// Sorting
	for ( i = 0; i < 5; i++ )
	{
		for ( j = 0; j < 5; j++ )
		{
			if ( num[i] < num[j] )
			{
				tmp_num = num[i];
				num[i] = num[j];
				num[j] = tmp_num;
			}
		}
	}

	mid = num[2];

	for ( i = 0; i < 5; i++ )
	{
		avg += num[i];
	}

	avg = avg/5;

	printf( "%d\n%d\n", avg, mid );

	return 0;
}
