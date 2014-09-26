#include<stdio.h>
//#define ONLINE_JUDGE
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("12403.in","r",stdin);
    #endif
    int nc,cash=0,t;
    char st[100],cs[100];
    //scanf("%d",&nc);
    gets(st);
    sscanf(st,"%d",&nc);
    while(nc--)
    {
        gets(st);
        if(st[0]=='d')
        {
            sscanf(st,"%s %d",&cs,&t);
            cash+=t;
        }
        else printf("%d\n",cash);

        //scanf("%s",st);
       //printf("%d --\n",t);
    }
    return 0;
}
