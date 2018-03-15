#include <stdio.h>

#define		MAX_WORD_LENGTH		15

int main ( void )
{
	char str[MAX_WORD_LENGTH + 1] = { 0, };
	int i = 0;
	int total_time = 0;

	scanf( "%s", str );

	while ( 1 )
	{
		if ( str[i] == '\0' || i >= 16 )
		{
			break;
		}

		if ( str[i] < 65 && str[i] > 90 )
		{
			break;
		}

		switch ( str[i] )
		{
			case 65:
			case 66:
			case 67:
				total_time += 3;
				break;
			case 68:
			case 69:
			case 70:
				total_time += 4;
				break;
			case 71:
			case 72:
			case 73:
				total_time += 5;
				break;
			case 74:
			case 75:
			case 76:
				total_time += 6;
				break;
			case 77:
			case 78:
			case 79:
				total_time += 7;
				break;
			case 80:
			case 81:
			case 82:
			case 83:
				total_time += 8;
				break;
			case 84:
			case 85:
			case 86:
				total_time += 9;
				break;
			case 87:
			case 88:
			case 89:
			case 90:
				total_time += 10;
				break;
		}

		i++;
	}

	printf( "%d\n", total_time );

	return 0;
}


