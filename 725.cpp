#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<map>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
char flag[12];
inline bool issame(int test,int tmp)
{

        int rem,same=0;
        memset(flag,0,sizeof flag);
        if((test<10000)||(tmp<10000)) flag[0]=1;
        if((test<10000)&&(tmp<10000)) return 1;
        while(test)
        {
            rem=test%10;
            if(flag[rem]) {same=1;break;}
            else flag[rem]=1;
            test/=10;
        }
        if(!same)
        while(tmp)
        {
            rem=tmp%10;
            if(flag[rem]) {same=1;break;}
            else flag[rem]=1;
            tmp/=10;
        }
        if(same) return 1;
        else return 0;
}
int main()
{
    #ifdef tuhin
    freopen("725.in","r",stdin);
    #endif
    int a,n,find,m,tc=0,lmt;

    while(1)
    {
        scanf("%d",&n);
        if(!n) break;
        if(tc) putchar('\n');


        ///*******
        //printf("%d %d\n",n,issame(n));
        find=0;
        lmt=98766/n;
        for(m=1234;m<=lmt;m++)
        {
            a=m*n;
            if(!issame(m,a)){find++;printf("%.5d / %.5d = %d\n",a,m,n);}
        }
        //printf("%d\n",find);printf("%c%d / %c%d = %d\n",a<10000?'0':'',a,m,n);
        if(!find)printf("There are no solutions for %d.\n",n);
        tc++;
    }
    return 0;
}
