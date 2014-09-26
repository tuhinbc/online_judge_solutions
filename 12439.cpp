#include<stdio.h>
#include<string.h>
//#define ONLINE_JUDGE
/*    if(mn[2]!='n')
    {
        pp=(mn[2]=='b');
        */
bool flag=0;
int count(char mn[40],int dt,int yr)
{
    int nofl=0;
    bool pp;
    //if(strcmp(mn,"January"))
    //if(!((mn[2]=='n')&&(mn[3]=='u')))
    if(mn[4]!='a')
    {
        //pp=!strcmp(mn,"February");
        pp=(mn[2]=='b');
        if(!(pp&&(dt<29)))
        {
            if((!(yr%4))&&((yr%100)||(!(yr%400))))
            {
                nofl++;
                if(pp&&(dt==29))flag=1;
            }
        }
    }
    yr--;
    nofl+=yr/4-yr/100+yr/400;

    return nofl;
}
int main()
{
    int cn,dt,yr,a,b,n=1;
    bool fl;
    char mn[40];
    //freopen("12439.in","r",stdin);
    scanf("%d",&cn);
    while(n<=cn)
    {
        flag=0;
        scanf("%s%d%*c%d",&mn,&dt,&yr);
        //printf("%d\n",count(mn,dt,yr));
        a=count(mn,dt,yr);
        fl=flag;
        scanf("%s%d%*c%d",&mn,&dt,&yr);
        b=count(mn,dt,yr);
        //printf(" %d: %d\n",a,b);
        printf("Case %d: %d\n",n++,b-a+fl);
    }
    return 0;
}
