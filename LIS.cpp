#include <cstdio>
#include <cstdlib>
#include <cstring>
#include<vector>
#include<iostream>
#include<queue>
#include<math.h>
using namespace std;
string st;
int mem[1000];
int lft[1000];
int lis(int n)
{
    if(mem[n]!=-1) return mem[n];
    int ans=1;
    for(int i=0;i<n;i++)
    {
        if(st[i]<st[n])
        {
            //ans=max(ans,lis(i)+1);
            if(ans<lis(i)+1)
            {
                ans=lis(i)+1;
                lft[n]=i;
            }
        }
    }
    mem[n]=ans;
    return ans;
}
int printpath(int n)
{
    if(n==-1)return 0;
    printf("%c\n",st[n]);
    printpath(lft[n]);
}
int main()
{
    freopen("lis.txt","r",stdin);
    //st="15465454532121487897451021320000032156489758456";
    while(cin>>st)
    {
        memset(mem,-1,sizeof mem);
        memset(lft,-1,sizeof lft);
        cout<<lis(11)<<endl;
        //printpath(11);
    }
    for(int i=0;i<12;i++)
       printf("%d\n",mem[i]);
    return 0;
}
