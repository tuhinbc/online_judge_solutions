#include<stdio.h>
#include<string.h>
int main()
{
    int i,sum;
    char ch,tmp[150];
    //freopen("445.in","r",stdin);
    while(gets(tmp))
    {
        if(!strlen(tmp))
        {
            putchar('\n');
            continue;
        }

        i=0;
        while(tmp[i])
        {
            sum=0;
            while((tmp[i]>47)&&(tmp[i]<58))
            {
                sum+=tmp[i]-48;
                i++;
            }
            ch=tmp[i]=='b'?' ':tmp[i];
            i++;
            while(sum--)
            putchar(ch);

            if(tmp[i]=='!')
            {
                putchar('\n');
                i++;
            }
        }
        putchar('\n');
    }
    return 0;
}
