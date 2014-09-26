#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<queue>
#include<math.h>
#include<string.h>
using namespace std;
#define maxv 1000010
//#define msize 500000//  maxv/8
char mem[maxv/8+30];

int count=0;
inline void marknp(int t)
{
    t--;
    int sec=t>>3,offset=t&0x0007; ///  optimize it
    char mask=1<<(7-offset);
    mem[sec]|=mask;
    //printf("%d\n",mask);
}
inline bool chk(int t)
{
    t--;
    int sec=t>>3,offset=t&0x0007; ///  optimize it
    char mask=1<<(7-offset);
    if(mem[sec]&mask) return 0;  /// non prime 0
    else return 1;              /// prime 1
}
void bitsieve()
{
    marknp(1);
    //for(int i=0;i<5;i++)
    int chklmt=sqrt(maxv)+2;
    for(int walk=2;walk<chklmt;walk++)
    {
        for(int run=walk+walk;run<maxv;run+=walk)
        {
            if(chk(run)) marknp(run);
           // printf("%d\n",mem[0]);
        }
    }
}
int inline isp(int t)
{
    if(t==1) return 0;
    else if(t==2) return 1;
    else if(t%2==0)return 0;
    int lm=sqrt(t);
    for(int i=3;i<=lm;i+=2)
    if(t%i==0) return 0;

    return 1;
}
int main()
{
    #ifdef tuhin
    freopen("10235.in","r",stdin);
    #endif
    char pp[30];
    int n,t;
    //bitsieve();
    while(gets(pp))
    {
        n=atoi(pp);
        if(!isp(n))printf("%d is not prime.\n",n);
        else
        {
            //strrev();
            reverse(pp,pp+strlen(pp));
            t=atoi(pp);
            if(isp(t)&&t!=n)printf("%d is emirp.\n",n);
            else printf("%d is prime.\n",n);
            //strcmp();
        }
    }
    return 0;
}
