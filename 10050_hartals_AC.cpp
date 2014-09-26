#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    //freopen("t.in","r",stdin);
    bool ar[4000];
    int tc,pn,i,day,a,h;

    cin>>tc;
    while(tc--)
    {
        cin>>day;
        cin>>pn;

        for(i=1;i<=day;i++)
        ar[i]=false;

        while(pn--)
        {
            cin>>h;
            for(i=h;i<=day;i+=h)
                ar[i]=true;
        }

        for(i=7;i<=day+10;i+=7)
        {
                ar[i-1]=false;
                ar[i]=false;
        }

        a=0;
        for(i=1;i<=day;i++)
            if(ar[i]) a++;
        cout<<a<<endl;
    }
    return 0;
}
