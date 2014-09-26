#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<string.h>
using namespace std;
int main()
{
    #ifdef tuhin
    freopen("10931.in","r",stdin);
    #endif
    int t,mask,cnt,on;
    char buff[40];
    while(1)
    {
        scanf("%d",&t);
        if(!t)break;
        printf("The parity of ");
//        mask=0x40000000;
//        cnt=0;
//        on=0;
//        while(mask)
//        {
//            if(t&mask) {putchar('1');cnt++;on++;}
//            else if(on) putchar('0');
//            mask>>=1;
//            //mask&=0x7fffffff;
//        }
        printf("%s",itoa(t,buff,2));
        printf(" is %d (mod 2).\n",cnt);
    }
    return 0;
}
