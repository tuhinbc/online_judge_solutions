#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    //freopen("t.in","r",stdin);
    int tc,ii,mask,b1,b2;
    char p[10];

    scanf("%d",&tc);

    while(tc--)
    {
        cin>>p;
        sscanf(p,"%d",&ii);

        mask=1;
        b1=0;
        while(mask)
        {
            if(mask&ii) b1++;
            mask=mask<<1;
        }

        sscanf(p,"%x",&ii);

        mask=1;
        b2=0;
        while(mask)
        {
            if(mask&ii) b2++;
            mask=mask<<1;
        }
        printf("%d %d\n",b1,b2);
    }
    return 0;
}
