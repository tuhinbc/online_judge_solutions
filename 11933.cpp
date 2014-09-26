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
    freopen("11933.in","r",stdin);
    #endif
    int n,mask,i,a,b;
    while(1)
    {
        scanf("%d",&n);
        if(!n) break;
        a=b=0;
        i=1;
        mask=0x00000001;
        while(mask)
        {
            if(n&mask)
            {
                if(i&0x00000001)
                    a=a|mask;
                else b=b|mask;
                i++;
            }
            mask<<=1;
        }
        printf("%d %d\n",a,b);
    }
    return 0;
}
