#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    #ifdef tuhin
    freopen("237A.in","r",stdin);
    #endif

    int pp,max,pre,time,h,m,nn,conti=0;

    scanf("%d",&pp);
    if(pp==0) max=0;
    else
    {
        max=1;
        conti=1;
        pre=-1;
    }

    while(pp--)
    {
        scanf("%d%d",&h,&m);
        time=h*60+m;
        if(time==pre)
        {
            conti++;

        }
        else
        {
            max=max>conti?max:conti;
            conti=1;
        }
        pre=time;
    }
    max=max>conti?max:conti;
    printf("%d\n",max);
    return 0;
}
int MAIN()
{
    cout<<"65465";
}
