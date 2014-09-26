//uva 10324 c++
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    //freopen("t.in","r",stdin);
    int test,a,b,m,c=1;
    char ar[1000000],tmp[20];
    while(gets(ar))
    {
        gets(tmp);
        sscanf(tmp,"%d",&test);
        printf("Case %d:\n",c++);
        while(test--)
        {
            gets(tmp);
            sscanf(tmp,"%d%d",&a,&b);
            //printf("%d %d\n",a,b);
            if(b<a){m=a;a=b;b=m;}
            for(m=0;a<=b;a++)
                if(ar[a]!=ar[b]){m=1;break;}
            if(m)printf("No\n");
            else printf("Yes\n");
        }
    }
    return 0;
}
