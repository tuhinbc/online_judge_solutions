#include<stdio.h>
#include<iostream>
//#define ONLINE_JUDGE
using namespace std;
int main()
{
    long n,n0,n1,tmp;
    //scanf("%d",&n);
    cin>>n;
    while(n)
    {
        n0=0;
        n1=1;
        while(n--)
        {
            tmp=n1;
            n1=n0;
            n0+=tmp;
        }
        //printf("%d\n",n0+n1);
        //scanf("%d",&n);
        cout<<n0+n1<<endl;
        cin>>n;
    }
    return 0;
}
