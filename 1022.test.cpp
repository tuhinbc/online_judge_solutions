    #include <stdio.h>
    #include <math.h>
    #include <stdlib.h>

    const double pi = 2 * acos(0.0);

    int main() {
        freopen( "c.in", "w", stdout );
        int cases, caseno = 0;
        double rad, l;

        cases = 1000;
        printf("%d\n", cases);
        while( cases-- ) {
            rad = rand() % 999 + 1;

            double x, y, z;
            while(1) {
                x = rand() % 10000 + 1;
                y = rand() % 10000 + 1;
                if( x > y ) {
                    z = x;
                    x = y;
                    y = z;
                }
                if( x + 1e-11 < y ) break;
            }
            rad += x/y;

            if( rand() % 2 ) printf("%.1lf\n", rad);
            else if( rand() % 2 ) printf("%.2lf\n", rad);
            else if( rand() % 2 ) printf("%.0lf\n", rad);
            else if( rand() % 2 ) printf("%.4lf\n", rad);
            else printf("%.3lf\n", rad);
        }
        return 0;
    }
