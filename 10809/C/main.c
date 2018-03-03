#include <stdio.h>
#include <string.h>

int main( void )
{
	char str[100] = "";
	int print_arr[26] = { 0, };
	int i = 0, j = 0;

	memset( print_arr, -1, sizeof(int) * 26 );

	scanf( "%s", str );

	for ( i = 0; i < 26; i++ )
	{
		for ( j = 0; str[j] != 0; j++ )
		{
			if ( ((str[j] - 97) == i) && print_arr[i] == -1 )
			{
				print_arr[i] = j;
				break;
			}
		}
	}

	for ( i = 0; i < 26; i++ )
	{
		printf( "%d\n", print_arr[i] );
	}

	return 0;
}
