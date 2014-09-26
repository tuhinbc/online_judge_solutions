#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    #ifdef tuhin
    freopen("11636.in","r",stdin);
    #endif
    int a,b,cs=1,len,one;
    while(scanf("%d",&a)&&a>-1)
    {
        //if(a<2) b=0;
        if(a&0x10000000) break;
        //else if(a==2) b=1;
        //else b=ceil(sqrt(a));
        one=0;
        len=0;
        while(a)
        {
            if(a&0x00000001) one++;
            len++;
            a>>=1;
        }
        printf("Case %d: %d\n",cs++,one==1?len-1:len);//);
    }
    return 0;
}
