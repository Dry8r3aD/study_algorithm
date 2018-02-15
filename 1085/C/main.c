#include <stdio.h>

#define MIN(X,Y) ((X) < (Y) ? (X) : (Y))

int main ( void )
{
    int x = 0, y = 0;
    int w = 0, h = 0;
    int x_ret = 0, y_ret = 0;

    scanf( "%d %d", &x, &y );
    scanf( "%d %d", &w, &h );

    if ( x == w || y == h )
    {
        printf("0\n");
        return 0;
    }

    x_ret = MIN( x, w-x );
    y_ret = MIN( y, h-y );

    printf ( "%d", MIN( x_ret, y_ret ));
    return 0;
}
