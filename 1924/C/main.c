#include <stdio.h>

#define	EOM	-1 // End of month
#define MON	1
#define TUE	2
#define	WED 3
#define	THU	4
#define	FRI	5
#define	SAT	6
#define	SUN	7

int main ( void )
{
	int month = 0;
	int day = 0;
	int last_day_of_month = 0;
	int week_arr[12][32];

	scanf( "%d %d", &month, &day );

	week_arr[0][31] = EOM; // Jan
	week_arr[1][28] = EOM;
	week_arr[2][31] = EOM;
	week_arr[3][30] = EOM;
	week_arr[4][31] = EOM;
	week_arr[5][30] = EOM;
	week_arr[6][31] = EOM;
	week_arr[7][31] = EOM;
	week_arr[8][30] = EOM;
	week_arr[9][31] = EOM;
	week_arr[10][30] = EOM;
	week_arr[11][31] = EOM;

	for ( int i = 0; i < 12; i++ )
	{
		for ( int j = 0; i < 31; j++ )
		{
			if ( i == 0 && j == 0 )
			{
				week_arr[i][j] = MON;
				continue;
			}

			if ( week_arr[i][j] == EOM )
			{
				last_day_of_month = j-1;
				break;
			}

			if ( j == 0 && i != 0 ) // First day of the month from Feb to Dev
			{
				if ( week_arr[i-1][last_day_of_month] == 7 )
				{
					week_arr[i][j] = MON;
				}
				else
				{
					week_arr[i][j] = week_arr[i-1][last_day_of_month] + 1;
				}

				last_day_of_month = 0;
				continue;
			}

			if ( week_arr[i][j-1] == 7 )
			{
				week_arr[i][j] = MON;
			}
			else
			{
				week_arr[i][j] = week_arr[i][j-1] + 1;
			}
		}
	}

	switch ( week_arr[month-1][day-1] )
	{
		case 1:
			printf( "MON\n" );
			break;
		case 2:
			printf( "TUE\n" );
			break;
		case 3:
			printf( "WED\n" );
			break;
		case 4:
			printf( "THU\n" );
			break;
		case 5:
			printf( "FRI\n" );
			break;
		case 6:
			printf( "SAT\n" );
			break;
		case 7:
			printf( "SUN\n" );
			break;
	}

	return 0;
}
