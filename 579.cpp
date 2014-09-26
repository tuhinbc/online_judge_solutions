#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
    #ifdef tuhin
    freopen("579.in","r",stdin);
    #endif
    int h,m;
    double dh,dm,diff;
    while(1)
    {
        scanf("%d:%d",&h,&m);
        if(!(h||m)) break;
        dh=h*30+.5*m;
        dm=m*6;
        diff=dh<dm?dm-dh:dh-dm;
        printf("%.3f\n",diff>180?360-diff:diff);
    }
    return 0;
}
