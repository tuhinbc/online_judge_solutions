#include<stdio.h>
#include<string.h>
int i,n,mm[50];
char p[500],in[120][50];
void ini_baln()
{
    int s=0;
    while(s++<=n)
        mm[s]=0;
}
int getid(char pp[500])
{
    int k=1;
    while(k<=n)
    {
        if(!strcmp(in[k],pp)) return k;
        k++;
    }
    return 0;
}
void execute()
{
    int m=1,p,giversid,mny,cand,mp,candid;
    char tmp[500];
    i=1;
    while(i<=n)
    {
        scanf("%s",&in[i]);
        i++;
    }
    ini_baln();
    while(m<=n)
    {
        scanf("%s %d %d",&tmp,&mny,&cand);
        giversid=getid(tmp);
        mp=mny?(mny/cand):0;
        mm[giversid]-=mp*cand;
        p=1;
        while(p<=cand)
        {
            scanf("%s",&tmp);
            candid=getid(tmp);
            mm[candid]+=mp;
            p++;
        }
        m++;
    }
}
void show()
{
    int ttt=1;
    while(ttt<=n)
    {
        printf("%s %d\n",in[ttt],mm[ttt]);
        ttt++;
    }
}
int main()
{
    int x=0;
    //freopen("min.txt","r",stdin);
    while(scanf("%d",&n)!=EOF)
    {
        execute();
        if(x)putchar('\n');
        x=1;
        show();
    }
    return 0;
}
