#include<stdio.h>
inline int readint()   ///  one line one integer
{
    int result = 0;
    char c = getchar();
    do
    {
        result = (result<<3) + (result<<1) + c - 48;
    }
    while ((c = getchar()) != '\n');
    return result;
}

int main()
{
    //freopen("intest.in","r",stdin);
    int n,a=5;


    a=readint();

    while(a--)
    {
        n=readint();
        printf("%d\n",(n/5 + n/25 + n/125+ n/625) + (n/3125 + n/15625+ n/78125 + n/390625) + (n/1953125+ n/9765625 + n/48828125 + n/244140625));
    }

    return 0;
}
