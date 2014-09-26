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
    freopen("495.in","r",stdin);
    #endif
    int p;
    long long ar[5005];
    ar[0]=0;
    ar[1]=1;
    for(int i=2;i<5002;i++)
        ar[i]=ar[i-1]+ar[i-2];

    while(scanf("%d",&p)!=EOF)
    {
        cout<<"The Fibonacci number for "<<p<<" is "<<ar[p]<<endl;
    }

    return 0;
}
