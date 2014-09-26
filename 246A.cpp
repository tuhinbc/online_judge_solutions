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
    freopen("246A.in","r",stdin);
    #endif
    int n;
    scanf("%d",&n);
    if(n<3) printf("-1");
    else
    {
        printf("%d",n--);
        while(n) printf(" %d",n--);
    }
    putchar('\n');
    return 0;
}
