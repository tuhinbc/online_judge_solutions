#include<stdio.h>
#include<string.h>
int test(char a[100000],char b[100000])
{
    int l,m=0,n=0;
    l=strlen(a);
    while(a[m]&&b[n])
    {
        if(a[m]==b[n])
        {
            m++;
            n++;
        }
        else n++;
    }
    if(l==m) return 1;
    else return 0;
}
int main()
{
    char a[100000],b[100000];
    //freopen("min.txt","r",stdin);
    while(scanf("%s %s",&a,&b)!=EOF)
    {
        printf(test(a,b)?"Yes\n":"No\n");
    }

    return 0;
}
