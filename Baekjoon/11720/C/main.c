#include <stdio.h>

#define ASCII_CALC_NUM	48

int main ( void )
{
	char num_arr[100] = {0,};
	int num_cnt = 0;
	int i = 0;
	int res = 0;

	scanf( "%d", &num_cnt );
	scanf( "%s", num_arr );

	for ( i = 0; i < num_cnt; i++ )
	{
		res += ((int)num_arr[i]) - ASCII_CALC_NUM;
	}

	printf("%d \n", res);

	return 0;
}
