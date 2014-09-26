//uva 11559 c++
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
    freopen("11559.in","r",stdin);
    #endif
    bool ok;
    int ppl,bgt,htls,week,minimumcost,totalcost,cost,available;
    while(scanf("%d%d%d%d",&ppl,&bgt,&htls,&week)!=EOF)
    {
        minimumcost=2147483647;
        while(htls--)
        {
            ok=false;
            scanf("%d",&cost);
            totalcost=cost*ppl;
            for(int t=1;t<=week;t++)
            {
                scanf("%d",&available);
                if(available>=ppl) ok=true;
            }
            if(totalcost>bgt) ok=false;
            if(ok)
            {
                //if(!minimumcost) minimumcost=totalcost;
                if(totalcost<minimumcost) minimumcost=totalcost;
            }
        }
        if(minimumcost!=2147483647) printf("%d\n",minimumcost);
        else printf("stay home\n");
    }
    return 0;
}
