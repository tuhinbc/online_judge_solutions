#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
long long cse=1;
void calc(long long strt,long long mid,long long des,long long lav)
{
    long long dir=lav%2,x,y;
    if(dir==0)
    {
        if(des==mid) {x=lav;y=lav;}
        else if(des<mid) {x=lav-mid+des;y=lav;}
        else if(des>mid) {x=lav;y=lav-des+mid;}
    }
    else
    {
        if(des==mid) {x=lav;y=lav;}
        else if(des<mid) {x=lav;y=lav+des-mid;}
        else if(des>mid) {x=lav-des+mid;y=lav;}
    }
    cout<<"Case "<<cse++<<": "<<x<<" "<<y<<endl;
}
int main()
{
    #ifdef tuhin
    freopen("new.in","r",stdin);
    #endif
    long long des,root,lavel,temp,strt,mid,tc;
    cin>>tc;
    while(tc--)
    {
        cin>>des;
        //des=i;
        root=sqrt(des);
        temp=root*root;
        if(temp==des)
        {
            lavel=root;
            strt=(lavel-1)*(lavel-1)+1;
        }
        else
        {
            lavel=root+1;
            strt=temp+1;
        }
        mid=strt+lavel-1;
        //prlong longf("lav %d str %d mid %d\n",lavel,strt,mid);
        calc(strt,mid,des,lavel);
    }
    return 0;
}
