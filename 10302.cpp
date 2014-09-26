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
    freopen("10302.in","r",stdin);
    #endif
    unsigned long long n;
    while(cin>>n)
    {
        printf("%llu\n",(n*n*(n+1)*(n+1))/4);
    }
    return 0;
}
