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
    freopen("386.in","r",stdin);
    #endif
    int ar[210],ti,ta,tb,tc;
    for(int i=6;i<201;i++)
    {
        ti=i*i*i;
        for(int a=2;a<i;a++)
        {
            ta=a*a*a;
            for(int b=a;b<i;b++)
            {
                tb=b*b*b;
                for(int c=b;c<i;c++)
                {
                    tc=c*c*c;
                     if(ti==ta+tb+tc)
                     {
                         //s=a+b+c;t=1;
                         //for(int k=1;k<p;k++) if(ar[k]==s)t=0 ;
                         //if(!t) continue;
                         printf("Cube = %d, Triple = (%d,%d,%d)\n",i,a,b,c);
                         //ar[p++]=s;
                         //printf("%d\n",s);
                     }
                }
            }
        }
    }
    return 0;
}
