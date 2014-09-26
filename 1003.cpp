#include<stdio.h>
int main()
{
    int tc,n;
    char a[10],b[10];
    bool ok,pa,pi,po;
    #ifndef ONLINE_JUDGE
    //freopen("1003.in","r",stdin);
    #endif
    scanf("%d",&tc);
    for(int i=1;i<=tc;i++)
    {
        ok=true;
        pa=pi=po=false;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%s%s",&a,&b);
            if(a[1]=='i') ok=false;
            if((!pa)||(!pi)||(!po))
            {
                if(a[1]=='i') pi=true;
                if(b[1]=='i') pi=true;
                if(a[1]=='a') pa=true;
                if(b[1]=='a') pa=true;
                if(a[1]=='o') po=true;
                if(b[1]=='o') po=true;
            }
        }
        printf("Case %d: %s\n",i,pi&&pa&&po&&ok?"Yes":"No");
    }
    return 0;
}
