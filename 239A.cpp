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
    freopen("239A.in","r",stdin);
    #endif
    int a,b,c,yy=0,need;
    scanf("%d%d%d",&a,&b,&c);
    need=b-(a%b);
    if(need+a>c) printf("-1");
    else
    {
        c-=a;
        printf("%d",need);
        need+=b;
        while(need<=c)
        {
            printf(" %d",need);
            need+=b;
        }
    }
    //if(!yy)
    //printf("-1");
    putchar('\n');
    return 0;
}
