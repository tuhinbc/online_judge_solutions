#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
    #ifdef tuhin
    freopen("10161.in","r",stdin);
    #endif
    int time,square,dist,x,y;
    while(scanf("%d",&time)&&time)
    {
        square = floor(sqrt(time));
        dist = time - square*square;

        if (dist == 0) {
            x = 1;
            y = square;
        } else if (dist <= (square + 1)) {
            x = dist;
            y = square + 1;
        } else {
            x = square + 1;
            y = (2 * square) + 2 - dist;
        }

        /* change direction */
        //printf("%d %d\n",x,y);
        //cout<<square<<endl;
        if (!(square&0x00000001)) {
            x ^= y;
            y ^= x;
            x ^= y;
        }
//        if ((square % 2) == 0) {
//            int tmp = x;
//            x = y;
//            y = tmp;
//        }

        printf("%d %d\n",x,y);

    }
    return 0;
}
