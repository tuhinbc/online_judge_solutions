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
    freopen("11332.in","r",stdin);
    #endif
    int a,b;
    while(1)
    {
        scanf("%d",&a);
        if(!a) break;
        printf("%d\n",a%9==0?9:a%9);
    }
    return 0;
}
