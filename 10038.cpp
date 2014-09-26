#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<queue>
#define diff(a,b){a>b?a-b:b-a}
using namespace std;
int main()
{
    #ifdef tuhin
    freopen("10038.in","r",stdin);
    #endif
    int n,a,b,ar[3010],d,mask=1500,cnt;
    while(scanf("%d",&n)!=EOF)
    {
        scanf("%d",&a);
        cnt=0;
        for(int i=1;i<n;i++)
        {
            scanf("%d",&b);
            d=diff(a,b);
            //printf("--%d-%d \n",d,cnt);
            if(d>0&&d<n)
            {
                if(ar[d]!=mask) {ar[d]=mask;cnt++;}
            }
            a=b;
        }
        printf("%s\n",cnt==(n-1)?"Jolly":"Not jolly");
        mask+=5;
    }
    return 0;
}
