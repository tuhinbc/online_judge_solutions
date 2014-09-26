#include<stdio.h>
#include<iostream>
#define ll long long
using namespace std;
int main()
{
    int tc,bin1,bin2,dec,hex;
    char st[20];
    gets(st);
    sscanf(st,"%d",&tc);
    while(tc--)
    {
        gets(st);
        sscanf(st,"%d",&dec);
        sscanf(st,"%x",&hex);
        //cout<<dec<<" "<<hex;
        printf("%d %d\n",__builtin_popcount(dec),__builtin_popcount(hex));
    }

    //cout<<__builtin_popcount(8);
    return 0;
}
