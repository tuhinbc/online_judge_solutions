#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>

using namespace std;
int main()
{
    #ifdef tuhin
    freopen("10346.in","r",stdin);
    #endif
    long long a,b,n;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
//        n=(a*b);
//        b--;
//        if(n%b==0) n=n/b-1;
//        else n/=b;
//        printf("%lld\n",n);
        printf("%lld\n",a+(a-1)/(b-1));
    }
    return 0;
}
