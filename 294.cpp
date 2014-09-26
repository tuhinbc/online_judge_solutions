#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
#define maxv 32000
int list[maxv+1];
int maxp=0;
inline bool isp(int t)
{
    return !list[t];
}
void sieve()
{
    int walk,lmt=sqrt(maxv)+1;
    list[1]=true;
    for(walk=2;walk<=lmt;walk++)
    {
        if(!isp(walk)) continue;
        for(int run=walk+walk;run<=maxv;run+=walk)
        {
            list[run]=true;
        }
        list[++maxp]=walk;
    }
    //printf("%d",walk);
    walk+=walk%2==0?1:0;
    //printf("%d",walk);
    for(;walk<maxv;walk+=2)
        if(isp(walk)) list[++maxp]=walk;
}
int inline divcnt(int n)
{
    int sl=1,cnt,tot=1;
    //printf("%d\n",n);
    while(n!=1&&sl<maxp)
    {
        cnt=0;
        while(n%list[sl]==0)
        {
            n/=list[sl];
            cnt++;
        }
        sl++;
        tot*=(cnt+1);
    }
    //printf("%d\n",tot);
    return tot;
}
int main()
{
    #ifdef tuhin
    freopen("294.in","r",stdin);
    #endif
    int a,b,tc,ml,md,tmp,p;
    sieve();
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d%d",&a,&b);
        for(tmp=0,ml=0,md=0,p=a;p<=b;p++)
        {
            tmp=divcnt(p);
            if(tmp>md) ml=p,md=tmp;
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n",a,b,ml,md);

    }

    //printf("%d %d\n",i,tfactor(i));
    return 0;
}
