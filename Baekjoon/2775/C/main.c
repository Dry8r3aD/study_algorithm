#include <stdio.h>

#define MAX_FLOOR_CNT   15
#define MAX_ROOM_CNT    14

int main ( void )
{
	int test_case = 0;
	int people[15][15];

	scanf( "%d", &test_case );

	for ( int i = 0; i < MAX_FLOOR_CNT; i++ )
	{
		for ( int j = 1; j <= MAX_ROOM_CNT; j++ )
		{
			// First floor Exception
			if ( i == 0 )
			{
				people[i][j] = j;
				continue;;
			}

			// First rooms Exception
			if ( j == 1 )
			{
				people[i][j] = people[i-1][j];
				continue;
			}

			people[i][j] = people[i-1][j] + people[i][j-1];
		}
	}

	for ( int test_loop = 0; test_loop < test_case; test_loop++ )
	{
		int floor = 0;
		int room = 0;

		scanf( "%d %d", &floor, &room );

		printf( "%d\n", people[floor][room] );
	}

	return 0;
}
