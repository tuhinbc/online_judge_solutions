#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
struct st
{
    int p;
    int q;
};
int main()
{

    #ifdef tuhin
    freopen("242A.in","r",stdin);
    #endif
    int a,b,al,bl,n;
    queue<st> qq;
    st tmp;
    scanf("%d%d%d%d",&al,&bl,&a,&b);
    n=b;
    for(;a<=al;a++)
    {
        for(b=n;b<=bl;b++)
        {
            //printf("%d %d\n",a,b);
            if(!(b<a)) continue;
            tmp.p=a;
            tmp.q=b;
            qq.push(tmp);
        }
        //printf("%d\n",qq.size());
    }
    printf("%d\n",qq.size());
    while(!qq.empty())
    {
        tmp=qq.front();
        qq.pop();
        printf("%d %d\n",tmp.p,tmp.q);
    }
    return 0;
}
