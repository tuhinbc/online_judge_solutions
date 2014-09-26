#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<cmath>
using namespace std;
int main()
{
    #ifdef tuhin
    freopen("11614.in","r",stdin);
    #endif
    long long a,tc;
    scanf("%lld",&tc);
    while(tc--)
    {
        scanf("%lld",&a);
        a=a*8+1;
        a=(int)(sqrt(a));
        a-=1;
        a/=2;
        printf("%lld\n",a);
    }
    return 0;
}
