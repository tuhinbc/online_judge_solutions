#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
    #ifdef tuhin
    freopen("11222.in","r",stdin);
    #endif
    bool as[10100],bs[10100],cs[10100],marked[10100];
    int tc,n,cas=1,pb_no,pa,pb,pc,max;
    scanf("%d",&tc);
    while(tc--)
    {
        memset(as,0,sizeof as);
        memset(bs,0,sizeof as);    ///  as as as as
        memset(cs,0,sizeof as);
        memset(marked,0,sizeof as);

        pa=pb=pc=0;

        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&pb_no);
            as[pb_no]=true;
            marked[pb_no]=true;
        }
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&pb_no);
            bs[pb_no]=true;
            marked[pb_no]=true;
        }
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&pb_no);
            cs[pb_no]=true;
            marked[pb_no]=true;
        }
        for(int i=0;i<10001;i++)
        {
            if(!marked[i]) continue;
            if(as[i]+bs[i]+cs[i]>1)
            {
                as[i]=bs[i]=cs[i]=0;
                continue;
            }
            pa+=as[i];
            pb+=bs[i];
            pc+=cs[i];

        }
        max=pa;
        if(pb>max)max=pb;
        if(pc>max)max=pc;
        //printf("%d %d %d\n",pa,pb,pc);
        printf("Case #%d:\n",cas++);
        if(max==pa)
        {
            printf("%d %d",1,pa);
            for(int i=0;i<10001;i++)
            if(as[i])printf(" %d",i);
            putchar('\n');
        }
        if(max==pb)
        {
            printf("%d %d",2,pb);
            for(int i=0;i<10001;i++)
            if(bs[i])printf(" %d",i);
            putchar('\n');
        }
        if(max==pc)
        {
            printf("%d %d",3,pc);
            for(int i=0;i<10001;i++)
            if(cs[i])printf(" %d",i);
            putchar('\n');
        }
    }
    //printf("%d",tu+t);
    return 0;
}
