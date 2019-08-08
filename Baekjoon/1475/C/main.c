#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define DBG_MODE				1

#define MAX_ROOM_NUMBER_LENGTH	7
#define	ASCII_PADDING			48

void add_set_to_status( int *arr )
{
	for ( int i = 0; i < 10; i++ )
		arr[i]++;
}

#ifdef DBG_MODE
void print_digit_status( int *arr )
{
	printf("[STATUS] ");
	for ( int i = 0; i < 10; i++ )
	{
		printf( "%d ", arr[i] );
	}
	printf( "\n" );
}
#endif

int main ( void )
{
	char room_number[MAX_ROOM_NUMBER_LENGTH + 1] = { -1, };
	int digit_status[10] = { 0, }; // 0 ~ 9
	int used_set_cnt = 0;
	bool is_6_or_9 = false;

	scanf( "%s", room_number );

	used_set_cnt++;
	add_set_to_status( digit_status );

	// i : room_number의 번째 idx
	for ( int i = 0; i < strlen(room_number); i++ )
	{
		is_6_or_9 = (room_number[i] - ASCII_PADDING == 6 || room_number[i] - ASCII_PADDING == 9) ? true : false;

		// what is room #? 0 ~ 9
		for ( int j = 0; j < 10; j++ )
		{
			if ( room_number[i] - ASCII_PADDING == j )
			{
				if ( !is_6_or_9 && digit_status[j] <= 0 )
				{
					add_set_to_status( digit_status );
					used_set_cnt++;
				}
				else if ( is_6_or_9 && digit_status[6] + digit_status[9] <= 0 )
				{
					add_set_to_status( digit_status );
					used_set_cnt++;
				}

				digit_status[j]--;
				break;
			}
		}
	}

	printf("%d\n", used_set_cnt );

	return 0;
}
