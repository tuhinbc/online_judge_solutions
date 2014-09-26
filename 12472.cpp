#include<stdio.h>
#include<iostream>
#include<stdlib.h>
int findst(int n)
{
    int p=0x80000000,ct=32;
    while(ct)
    {
        if(p&n) break;
        p>>=1;
        ct--;
    }
    return ct;
}
int match(int a,int st,int b)
{
    int mask=a^b;
    while(st--)
    {
        if(mask&0x00000001) return false;
        mask>>=1;
    }
    return true;
}
int patmatch(int mm,int target)
{
    int mst=findst(mm);
    int tst=findst(target);
    while(tst>=mst)
    {
        if(match(mm,mst,target)) return true;
        target>>=1;
        tst--;
    }
    return false;
}
using namespace std;
int main()
{
    #ifdef tuhin
    freopen("12472.in","r",stdin);
    #endif
    int tc,a,b,tr,cs=1;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d %d %d",&a,&b,&tr);
        if(tr>b){printf("Case %d: NONE\n",cs++);continue;}
        for(;a<=b;a++)
        {
            //printf("%d\n",patmatch(5,10));
            if(patmatch(tr,a)) {printf("Case %d: %d\n",cs++,a);break;}

            if(a==b) printf("Case %d: NONE\n",cs++);
        }
    }
    //printf("%d",patmatch(18,9)?1:0);
    return 0;
}
