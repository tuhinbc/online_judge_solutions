#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int tt,i,user[105],start[105],end[105],ast[105];
void sinput()
{
    char str[110];
    i=1;
    while(1)
    {
        char *p;
        gets(str);
        if(strlen(str)==4) break;

        p=str;
        *(p+4)='\n';
        user[i]=atoi(p);

        p+=5;
        *(p+4)='\n';
        start[i]=atoi(p);

        p+=5;
        *(p+4)='\n';
        end[i]=atoi(p)+start[i];

        p+=5;
        *(p+4)='\n';
        ast[i]=atoi(p);
        //printf("%d\n",ast[i]);
        i++;
    }
    i--;
}
void show()
{
    int t=1;
    while(t<=i)
    {
        printf("%d %d %d %d\n",user[t],start[t],end[t],ast[t]);
        t++;
    }
}
int factive(int ctime,int des)
{
    int a=1,fa=0;
    while(a<=i)
    {
        if((user[a]==des)&&(start[a]<=ctime)&&(end[a]>=ctime))
        {
            tt=a;
            return 1;
        }
        a++;
    }
    return 0;
}
int gettail(int ctime,int des)
{
    int fa=0,loop[110],m,n;
    loop[1]=des;
    m=1;
    while(1)
    {
        if(!factive(ctime,des)) return des;
        des=ast[tt];

        for(n=1;n<=m;n++)
        {
            //printf("#%d %d\n",loop[n],des);
            if(loop[n]==des) return 9999;
        }
        m++;
        //loop[m]=des;
    }
}
void scall()
{
    int t,ctime,cdes,dest,fdest;
    char st[15],*p;
    while(1)
    {
        gets(st);
        if(strlen(st)==4) break;

        p=st;
        *(p+4)='\n';
        ctime=atoi(p);

        p+=5;
        *(p+4)='\n';
        cdes=atoi(p);

        //printf("%d %d\n",ctime,cdes);
        //start call distributing
        fdest=gettail(ctime,cdes);
        printf("AT %04d CALL TO %d RINGS %d\n",ctime,cdes,fdest);

    }
}
int main()
{
    int tns,pp=1;
    //freopen("min.txt","r",stdin);
    scanf("%d",&tns);
    printf("CALL FORWARDING OUTPUT\n");
    fflush(stdin);
    while(pp<=tns)
    {
        sinput();
        //show();
        printf("SYSTEM %d\n",pp);
        scall();
        pp++;
    }
    printf("END OF OUTPUT\n");
    return 0;
}
