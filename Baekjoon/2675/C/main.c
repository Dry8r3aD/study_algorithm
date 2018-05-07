#include <stdio.h>

#define     MAX_STR_NUM     20

int main( void )
{
    int tc_cnt = 0;
    int tc_loop_cnt = 0;
    int str_print_cnt = 0;
    int str_loop_cnt = 0;
    int str_digit_cnt = 0;
    char print_str[MAX_STR_NUM+2] = "";

    scanf( "%d", &tc_cnt );

    for ( tc_loop_cnt = 0; tc_loop_cnt < tc_cnt; tc_loop_cnt++ )
    {
        scanf( "%d", &str_print_cnt );
        scanf( "%s", print_str );

        for ( str_digit_cnt = 0; print_str[str_digit_cnt] != '\0'; str_digit_cnt++ )
        {
            for ( str_loop_cnt = 0; str_loop_cnt < str_print_cnt; str_loop_cnt++ )
            {
                printf( "%c", print_str[str_digit_cnt] );
            }
        }
        printf( "\n" );
    }

    return 0;
}
