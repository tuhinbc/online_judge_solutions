#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<queue>
#include<math.h>
using namespace std;
//#define ll long long
//int inline isp(ll t)
//{
//    if(t==1) return 0;
//    else if(t==2) return 1;
//    else if(t%2==0)return 0;
//    int lm=sqrt(t);
//    for(ll i=3;i<=lm;i+=2)
//    if(t%i==0) return 0;
//
//    return 1;
//}
#define maxv 33000
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
inline bool chksts(int t)
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
            if(chksts(run)) marknp(run);
           // printf("%d\n",mem[0]);
        }
    }
}
int main()
{
    #ifdef tuhin
    freopen("686.in","r",stdin);
    #endif
    int num,a,b,ct;
    bitsieve();
    while(scanf("%d",&num)&&num)
    {
        ct=0;
        a=2;
        b=num-a;
        //if(b==2){printf("1\n");continue}
        while(a<=b)
        {
            //printf("%d %d\n",a,b);
            if(chksts(a)&&chksts(b)) ct++;
            a++;
            b--;
        }
        printf("%d\n",ct);
    }
    //printf("%d\n",isp(1111111114444444));
    return 0;
}
