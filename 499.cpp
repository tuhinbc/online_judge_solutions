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
    freopen("499.in","r",stdin);
    #endif
    char ar[1000],*p;
    int count[150],i,max,tmp;
    while(gets(ar))
    {
        i=65;
        while(i<140) count[i++]=0;
        max=0;
        for(int t=0;ar[t];t++)
        {
            if(ar[t]<65) continue;
            count[ar[t]]++;
            if(max<count[ar[t]]) max=count[ar[t]];
        }
        i=65;
        while(i<91) {if(count[i]==max) putchar(i);i++;}
        i=97;
        while(i<123) {if(count[i]==max) putchar(i);i++;}
        printf(" %d\n",max);
    }
    return 0;
}






//
//        int i=0;
//        while(i<140) count[i++]=0;
//        max=0;
//        for(int t=0;ar[t];t++)
//        {
//            count[ar[t]]++;
//            if((count[ar[t]]>max)&&((ar[t]>64&&ar[t]<91)||(ar[t]<123&&ar[t]>96)))
//        }
//
//        printf("---%d\n",max);
//        for(int pp=97;pp<123;pp++)printf("%c %d\n",pp,cnt[pp]);
//        i=65;
//        while(i<91) {if(count[i]==max) putchar(count[i]);i++;}
//        i=97;
//        while(i<123) {if(count[i]==max) putchar(count[i]);i++;}
//        printf(" %d\n",max);
//        putchar(65);
