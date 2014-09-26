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
    freopen("11547.in","r",stdin);
    #endif
    int tc,n;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);
        n=315*n+36962;
        n/=10;
        n%=10;
        //cout<<()<<endl;
        printf("%d\n",n<0?-n:n);
    }
    return 0;
}
