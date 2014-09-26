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
    freopen("1015.in","r",stdin);
    #endif
    int tc,cs=1;
    scanf("%d",&tc);
    while(tc--)
    {
        getchar();
        int n,sum=0,dust;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&dust);
            sum+=dust>0?dust:0;
        }
        printf("Case %d: %d\n",cs++,sum);
    }
    return 0;
}
