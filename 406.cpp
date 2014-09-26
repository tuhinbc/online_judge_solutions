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
#define maxv 1010
bool list[maxv+1];
int prime[1005],mx,siri[1005];
void sieve()
{
    //for(int i=0;i<5;i++)
    int chklmt=sqrt(maxv);
    for(int walk=3;walk<=chklmt;walk+=2)
    {
        for(int run=walk+walk;run<=maxv;run+=walk)
        {
            list[run]=true;
        }
    }
}
inline bool isprime(int t)
{
    if(t==1) return true;
    else if(t==2) return true;
    else if(t%2==0) return false;
    return !list[t];
}
int crtlst()
{
    mx=0;
    for(int i=1;i<1001;i++)
    {
        if(isprime(i)){prime[++mx]=i;}
        siri[i]=mx;
    }
    //mx=80;
}
int main()
{
    #ifdef tuhin
    freopen("406.in","r",stdin);
    #endif
    int n,c,st,tot=0;
    sieve();
    crtlst();
    //for(int i=1;i<=mx;i++)
    //printf("%d\n",prime[i]);
    //printf("%d\n",mx);
    while(scanf("%d%d",&n,&c)!=EOF)
    {
        //if(tot++)putchar('\n');
        int p=c;
        if(siri[n]%2==0)
        {
            c=c*2;
        }
        else
        {
            c=c*2-1;
        }
        st=siri[n]-c;
        st/=2;
        st++;
        printf("%d %d:",n,p);
        if(c>siri[n]){c=siri[n];st=1;}
        while(c--)
        printf(" %d",prime[st++]);
        putchar('\n');
        putchar('\n');
    }
    return 0;
}
