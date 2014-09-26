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
    freopen("105.in","r",stdin);
    #endif
    int area[10050]={0},x,h,y,last,st;

    scanf("%d%d%d",&x,&h,&y);
    st=x;
        for(;x<y;x++)
        {
            if(area[x]<h) area[x]=h;
        }

    while(scanf("%d%d%d",&x,&h,&y)!=EOF)
    {
        for(;x<y;x++)
        {
            if(area[x]<h) area[x]=h;
        }
    }
    y+=2;
    last=0;
    area[0]=-564123;
    for(int i=st;i<10000;i++)
    {

        if(area[i]!=area[i-1])
        {
            if(last) putchar(' ');
            last=1;
            printf("%d %d",i,area[i]);
        }
        //last=area[i];
    }
    printf("\n");
    return 0;
}
