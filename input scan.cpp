#include<iostream>
#include<stdio.h>
using namespace std;
#define getcx getchar
inline void inp( int &n )
{
n=0;
int ch=getcx();int sign=1;
while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1;ch=getcx();}

while( ch >= '0' && ch <= '9' )
n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
n=n*sign;
}
main()
{
int n,t,i;
inp(t);
while(t--)
{
int min,max,diff=-1,gi;
inp(n);
inp(gi);
min=gi;
for(i=0;i<n-1;i++)
{
inp(gi);
if(gi<min)min=gi;
if(gi>min)
{
if(gi-min>diff)
diff=gi-min;
}
}
if(diff>0)
printf("%d\n",diff);
else
printf("UNFIT\n");

}
}
