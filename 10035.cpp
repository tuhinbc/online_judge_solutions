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
    freopen("10035.in","r",stdin);
    #endif
    int a,b,carry;
    int n;
    while(cin>>a>>b)
    {
        if(!a&&!b) break;
        carry=0;
        n=0;
        while(a||b)
        {
            carry+=a%10+b%10;
            if(carry>9)n++,carry/=10;
            else carry=0;
            a/=10;
            b/=10;
        }
        if(n==0)printf("No carry operation.\n");
        else if(n==1)printf("%d carry operation.\n",n);
        else printf("%d carry operations.\n",n);
    }
    return 0;
}
