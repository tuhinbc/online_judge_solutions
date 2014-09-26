#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
    #ifdef tuhin
    freopen("12376.in","r",stdin);
    #endif
    vector<vector<int> > vt(105);
    int e,i,j,m,n,val[110],tc,cs=1,a,b,cnd,lrn,max;
    scanf("%d",&tc);
    //printf("%d",vt.size());
    while(tc--)
    {
        getchar();
        scanf("%d%d",&n,&e);
        for(i=0;i<n;i++) scanf("%d",&val[i]);
        for(i=1;i<=e;i++)
        {
            scanf("%d%d",&a,&b);
            vt[a].push_back(b);
        }
        cnd=0;
        lrn=0;///+++++++++
        while(!vt[cnd].empty())
        {
            //printf("%d\n",cnd);
            max=0;
           for(i=1,j=vt[cnd].size();i<j;i++)
           {
               if(val[vt[cnd][i]]>val[vt[cnd][max]]) max=i;
           }
           lrn+=val[vt[cnd][max]];
           cnd=vt[cnd][max];
        }
        printf("Case %d: %d %d\n",cs++,lrn,cnd);
        for(i=0;i<n;i++)
        vt[i].clear();
    }
    return 0;
}
