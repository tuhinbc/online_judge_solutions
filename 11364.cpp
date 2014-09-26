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
    freopen("11364.in","r",stdin);
    #endif
    int tc,min,max,shops,n;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&shops);
        min=500000;
        max=-5000;
        while(shops--)
        {
            scanf("%d",&n);
            if(n<min) min=n;
            if(n>max) max=n;
        }
        printf("%d\n",(max-min)*2);
    }
    return 0;
}
