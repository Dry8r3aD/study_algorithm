#include <stdio.h>

#define ASC_STR		"ascending"
#define DEC_STR		"descending"
#define	MIX_STR		"mixed"

int main( void )
{
	int i = 0;
	int input_num[8] = { 0, };
	int maybe_dsc = 0, maybe_asc = 0;

	for ( i = 0; i < 8; i++ )
	{
		scanf( "%d", &input_num[i] );

		if ( (input_num[0] != 1) && (input_num[0] != 8) )
		{
			printf( "%s\n", MIX_STR );
			return 0;
		}
	}

	for ( i = 0; i < 7; i++ )
	{
		if ( (input_num[i] < input_num[i+1]) && (!maybe_dsc) )
		{
			if ( i == 6 && (maybe_asc == 6) )
			{
				printf( "%s\n", ASC_STR );
				return 0;
			}
			maybe_asc++;
			continue;
		}
		else if ( input_num[i] > input_num[i+1] && (!maybe_asc) )
		{
			if ( i == 6 && (maybe_dsc == 6) )
			{
				printf( "%s\n", DEC_STR );
				return 0;
			}
			maybe_dsc ++;
			continue;
		}
	}

	printf( "%s\n", MIX_STR );
	return 0;
}
