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
    freopen("11498.in","r",stdin);
    #endif
    int test,a,b,x,y;
    while(1)
    {
        scanf("%d",&test);
        if(!test) break;
        scanf("%d%d",&a,&b);
        while(test--)
        {
            scanf("%d%d",&x,&y);
            x-=a;
            y-=b;
            if(!(x&&y)) printf("divisa\n");
            else if(x>0&&y>0) printf("NE\n");
            else if(x<0&&y<0) printf("SO\n");
            else if(x<0&&y>0) printf("NO\n");
            else if(x>0&&y<0) printf("SE\n");
        }
    }
    return 0;
}
