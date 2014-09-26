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
    freopen("11984.in","r",stdin);
    #endif
    int cs=1,tc,a,b;
    double res;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d%d",&a,&b);
        res=(double)(a*9/5)+(double)32;
        res+=(double)b;
        res=(double)(res-(double)32)*((double)5/(double)9);
        printf("Case %d: %.2f\n",cs++,res);
    }
    return 0;
}
