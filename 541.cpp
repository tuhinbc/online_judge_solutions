#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int mt=0,r1=0,c1=0;
char m[105][105],tmp[105];
//void print()
//{
//    int r,c,t;
//    for(r=1;r<=mt;r++)
//        {
//            for(c=1;c<=mt;c++)
//            putchar(m[r][c]);
//            putchar('\n');
//        }
//}
void input()
{
    int r,c,t;
    for(r=1;r<=mt;r++)
        {
            gets(tmp);
            t=0;
            c=1;
            while(tmp[t])
            {
                m[r][c]=tmp[t];
                t+=2;
                c++;
            }
        }
}
int test()
{
    int r,c,error1=0,sum,error2=0;
    for(r=1;r<=mt;r++)
    {
        sum=0;
        for(c=1;c<=mt;c++)
            {
                sum+=m[r][c];
                //printf("%d ",m[r][c]);
            }
            //printf("fi %d\n",sum%2);

        if(sum%2==1)
        {
            error1++;
            r1=r;
        }
    }
    if(error1>1)return -1;

    for(c=1;c<=mt;c++)
    {
        sum=0;
        for(r=1;r<=mt;r++)
            {
                sum+=m[r][c];
            }
        if(sum%2==1)
        {
            error2++;
            c1=c;
        }
    }
    if(error2>1)return -1;
    return error1+error2;
}
int main()
{
    int res;
    freopen("541.in","r",stdin);
    while(gets(tmp))
    {
        mt=atoi(tmp);
        if(!mt) break;

        input();
        //print();
        res=test();
        //printf("%d",res);
        if(res==0) printf("OK\n");
        else if(res==2)
        {
            //printf("\n");
            //print();
            //printf("\n%d %d %d\n",m[r1][c1],r1,c1);
            //if(m[r1][c1]==48)m[r1][c1]++;
            //else m[r1][c1]--;
            //printf("\n%d %d %d\n",m[r1][c1],r1,c1);
            //print();
            //if(!test())
            printf("Change bit (%d,%d)\n",r1,c1);
            //else printf("Corrupt\n");
        }
        else printf("Corrupt\n");
    }
    return 0;
}
