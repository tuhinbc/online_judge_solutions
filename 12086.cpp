#include<stdio.h>
#include<stdlib.h>
#include <vector>
#define LSOne(S) (S & (-S))
using namespace std;
typedef vector<int> vi;


// initialization: n + 1 zeroes, ignoring index 0, just using index [1..n]
void ft_create(vi &ft, int n)
{ ft.assign(n + 1, 0); }

int ft_rsq(const vi &ft, int b)
{                      // returns RSQ(1, b)
  int sum = 0; for (; b; b -= LSOne(b)) sum += ft[b];
  return sum;
  }

int ft_rsq(const vi &ft, int a, int b) {               // returns RSQ(a, b)
  return ft_rsq(ft, b) - (a == 1 ? 0 : ft_rsq(ft, a - 1)); }

// adjusts value of the k-th element by v (v can be +ve/inc or -ve/dec)
void ft_adjust(vi &ft, int k, int v) {           // note: n = ft.size() - 1
  for (; k < (int)ft.size(); k += LSOne(k)) ft[k] += v; }
int main()
{
    #ifdef tuhin
    freopen("12086..in","r",stdin);
    #endif
    vi ar;
    int a,b,total,i,cs=1,n,val,j;
    char tmp[50],pp[20];
    while(1)
    {

        sscanf(gets(tmp),"%d",&n);
        if(!n) break;
        if(cs!=1)         putchar('\n');
        ft_create(ar,n);

        for(i=1;i<=n;i++) sscanf( gets( tmp ), "%d", &val) , ft_adjust( ar, i, val );

        //for(int i=1;i<=n;i++) printf("#%d %d\n",ar[i],i);

        printf("Case %d:\n",cs++);
        while(1)
        {
            gets(tmp);
            if(tmp[0]=='E') break;
            else if(tmp[0]=='S')
            {
                sscanf(tmp,"%s %d %d",pp,&a,&b);
                ft_adjust(ar,a,b-ft_rsq(ar,a,a));
                //ft_adjust(ar,a,b);
            }
            else
            {
                total=0;
                sscanf(tmp,"%s %d %d",pp,&a,&b);
                //for(i=a;i<=b;i++)
                //total+=ar[i];
                total=ft_rsq(ar,a,b);

                printf("%d\n",total);
            }

            //putchar('\n');
        }
        //for(int i=1;i<=n;i++) ft_adjust(ar,i,-ft_rsq(ar,i,i));
        //for(int i=1;i<=n;i++) printf("#%d\n",ft_rsq(ar,i,i));
        //for(int i=1;i<=n;i++) printf("#%d\n",ar[i]);
    }

    return 0;
}

