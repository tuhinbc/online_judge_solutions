#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    #ifdef tuhin
    freopen("245B.in","r",stdin);
    #endif
    char ar[60];
    gets(ar);
    if(ar[0]=='h') printf("http://");
        else printf("ftp://");
    int t=(ar[0]=='h'?4:3);
    for(int i=t;ar[i];i++)
    {
        if((ar[i]=='r'&&ar[i+1]=='u')&&t!=i)
        {
            printf(".ru");
            i+=2;
            if(ar[i]) putchar('/');
            while(ar[i]) putchar(ar[i++]);
            break;
        }
        else putchar(ar[i]);
    }
    putchar('\n');
    return 0;
}
