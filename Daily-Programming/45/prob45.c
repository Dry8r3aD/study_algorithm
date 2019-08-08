#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#define MAX_LENGTH 8
#define DEBUG 0

void debug_print_arr( char *arr )
{
	for ( int i = 0; i < MAX_LENGTH; i++ )
	{
		printf("%c ", arr[i] );
	}
	printf("\n");

	return;
}


void swap_char_arr( char *arr )
{
	int end_idx = 0;

	for ( int i = 0; arr[i] != 0; i++ )
	{
		end_idx = i;
	}

	for ( int i = 0; i != (end_idx+1)/2; i++ )
	{
		char temp = arr[i];
		arr[i] = arr[end_idx - i];
		arr[end_idx - i] = temp;
	}

}

void convert_dec_to_bin( uint32_t k, char *arr )
{
	int i = 0;

	while ( k != 0 )
	{
		if ( k % 2 )
		{
			arr[i] = '1';
		}
		else
		{
			arr[i] = '0';
		}
		k /= 2;
		i++;

	}

	swap_char_arr( arr );

	return;
}

void print_non_consec_value( char *arr )
{
	bool flag = false;

	for ( int i = 0; arr[i] != 0; i++ )
	{
		if ( arr[i] == '1' && arr[i+1] == '1' )
		{
			flag = true;
			continue;
		}
	}

	if ( flag == false )
	{
		printf( "%s ", arr );
	}

	return;
}

int main()
{
	uint32_t k = 0;
	uint32_t idx = 0;
	char converted[MAX_LENGTH + 1] = { 0, };

	scanf( "%d", &k );

	while ( idx != k )
	{
		if ( idx == 0 )
		{
			printf("0 ");
			idx++;
			continue;
		}
		convert_dec_to_bin( idx, converted );
		print_non_consec_value( converted );

		idx++;
	}

	printf("\n");

	return 0;
}
