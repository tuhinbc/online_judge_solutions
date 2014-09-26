#include<stdio.h>
int main()
{
    int a,l,i,ca=1,n;
    freopen("min.txt","r",stdin);
    while(1)
    {
        scanf("%d %d",&a,&l);
        n=a;
        if((a<0)&&(l<0)) break;
        i=0;
        while(1)
        {
            i++;
            if((a==1)||(a>l)) break;
            //printf("%d\n",a);
            if(a&0x00000001) a=a*3+1;
            else a/=2;
            printf("%d\n",2147483647*3);
            if((a>l)||(a<0)) break;
            //printf("%d\n",a);
        }
        printf("Case %d: A = %d, limit = %d, number of terms = %d\n",ca++,n,l,i);
    }
    return 0;
}
