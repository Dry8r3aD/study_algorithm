#include <stdio.h>
#include <stdint.h>

#define WRONG_INPUT_ERROR   -1
#define SUN                 6
#define MON                 0
#define TUE                 1
#define WED                 2
#define THU                 3
#define FRI                 4
#define SAT                 5

int main ( void )
{
    int i = 0;
    int j = 0;
    int mon = 0, day = 0, input_day = 0;
    int sum = 0;
    uint8_t res = 0;

    scanf ( "%d %d", &mon, &input_day );

    if ( mon < 1 || mon > 12 )
    {
        printf ( "TC input 'mon' is wrong : %u \n", mon );
        return WRONG_INPUT_ERROR;
    }

    if ( input_day < 1 || input_day > 31 )
    {
        printf ( "TC input 'input_day' is wrong : %u \n", input_day );
        return WRONG_INPUT_ERROR;
    }

    for ( i = 1; i <= mon-1; i++ )
    {
        if ( i == 2 )
        {
            day = 28;
        }
        else if ( i == 4 || i == 6 || i == 9 || i == 11 )
        {
            day = 30;
        }
        else
        {
            day = 31;
        }

        sum += day;
    }
    sum += (input_day-1);

    res = sum % 7;

    switch ( res )
    {
        case SUN :
            printf ( "SUN \n" );
            break;
        case MON :
            printf ( "MON \n" );
            break;
        case TUE :
            printf ( "TUE \n" );
            break;
        case WED :
            printf ( "WED \n" );
            break;
        case THU :
            printf ( "THU \n" );
            break;
        case FRI :
            printf ( "FRI \n" );
            break;
        case SAT :
            printf ( "SAT \n" );
            break;
        default :
            printf ( "Unknown return val : %u \n", res );
            break;
    }

    return 0;
}
