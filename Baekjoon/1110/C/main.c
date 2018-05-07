#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_DIGIT_LENGTH  2
#define ASCII_ZERO      48

static inline void adjust_number_digit( char* str_arr, int comp_num )
{
    if ( comp_num > 0 && comp_num <= 9 )
    {
        str_arr[1] = str_arr[0];
        str_arr[0] = ASCII_ZERO;
    }

    return;
}

int main( void )
{
    char num_ch[MAX_DIGIT_LENGTH + 1] = { 0, };
    int num_int = 0;

    int calc_num = 0;
    int cycle_cnt = 0;

    scanf( "%s", num_ch );
    num_int = atoi( num_ch );

    if ( num_int > 0 && num_int <= 9 )
    {
        adjust_number_digit( num_ch, num_int );
    }

    while ( true )
    {
        char tmp_num_ch[MAX_DIGIT_LENGTH + 1] = { 0, };
        int cycle_fin_checker = atoi( num_ch );

        if ( cycle_fin_checker == num_int  && cycle_cnt > 0)
        {
            break;
        }

        calc_num = (num_ch[0] - '0') + (num_ch[1] - '0');
        sprintf( tmp_num_ch, "%d", calc_num );

        adjust_number_digit( tmp_num_ch, calc_num );

        num_ch[0] = num_ch[1];
        num_ch[1] = tmp_num_ch[1];

        cycle_cnt++;
    }

    printf( "%d\n", cycle_cnt );

    return 0;
}
