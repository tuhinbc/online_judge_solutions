#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    #ifdef tuhin
    freopen("573.in","r",stdin);
    #endif
    int h,up,down,fat,step;
    double speed,done,pr;
    while(1)
    {
        scanf("%d%d%d%d",&h,&up,&down,&fat);
        if(!h)break;

        pr=(double)(up*fat)/100;
        //printf("%f\n",pr);
        speed=up;
        done=0;
        step=0;
        while(1)
        {
            step++;
            done+=speed;
            //printf("day %d up %.2f\n",step,done);
            if(done>(double)h) {done=-100;break;}

            //real=real-(real*fat)/100;
            done-=down;
            //printf("%.2f\n",done);
            if(done<(double)0) break;
            speed-=pr;
             if(speed<0) speed=0; ///if wrong answer

            //printf("day %d done %.2f\n",step,done);

        }
        if(done==-100) printf("success on day %d\n",step);
        else printf("failure on day %d\n",step);

    }
    return 0;
}
