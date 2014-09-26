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
    freopen("248A.in","r",stdin);
    #endif
    int n,a,b,l0=0,l1=0,r0=0,r1=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        if(a==0) l0++;
        else l1++;
        if(b==0) r0++;
        else r1++;
    }
    printf("%d\n",(l0<l1?l0:l1)+(r0<r1?r0:r1));
    return 0;
}
