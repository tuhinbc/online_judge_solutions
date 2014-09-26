//loj c++ 1053
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
    freopen("1053.in","r",stdin);
    #endif
    int tc,cs=1,a,b,c;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d%d%d",&a,&b,&c);
        a=a*a;
        b=b*b;
        c=c*c;
        if((a==b+c)||(b==c+a)||(c==a+b))
            printf("Case %d: yes\n",cs++);
        else printf("Case %d: no\n",cs++);
    }
    return 0;
}
