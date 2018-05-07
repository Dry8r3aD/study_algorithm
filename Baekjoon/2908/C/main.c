#include <stdio.h>

#define MAX_NUM_LENGTH	3

int main( void )
{
	char tmp_num = "";
	char num1[MAX_NUM_LENGTH + 2] = "";
	char num2[MAX_NUM_LENGTH + 2] = "";
	char print_num[MAX_NUM_LENGTH + 2] = "";

	int num1_i = 0, num2_i = 0;
	int i = 0;

	scanf( "%s %s", num1, num2 );

	tmp_num = num1[i];
	num1[i] = num1[i+2];
	num1[i+2] = tmp_num;

	tmp_num = num2[i];
	num2[i] = num2[i+2];
	num2[i+2] = tmp_num;

	num1_i = atoi( num1 );
	num2_i = atoi( num2 );

	printf( "%d\n", (num1_i > num2_i) ? num1_i : num2_i );

	return 0;
}
