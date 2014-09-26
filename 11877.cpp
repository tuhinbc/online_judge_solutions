#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<string.h>
#define BS 50

    char tmp[15];
    char *outbuff;
    char ibuffer[BS];
    int ibuffer_offset=0;
    int ibuffer_size=0;

    char obuffer[BS];
    int obuffer_offset=0;

static int inline fastread()
{
    int r=0, s=1;
    while(1)
    {
        //putchar(49);
        //printf("%d %d\n",ibuffer[ibuffer_offset],ibuffer_offset);
        if(ibuffer_offset>ibuffer_size) return 0;
        if(!ibuffer_offset)
        {
            ibuffer_size = read(0, ibuffer, BS);
            ibuffer_offset = 0;
        }
        if(ibuffer[ibuffer_offset] < 48)
         {
            //printf("%d %d\n",ibuffer_size,ibuffer_offset);
            if(s) ibuffer_offset++;
                else return r;
         }
        else
         {
            s = 0;
            r = (r<<3)+(r<<1) + ibuffer[ibuffer_offset++]-48;
         }
    }
}
void inline flush()
{
    write(1, obuffer, obuffer_offset);
    obuffer_offset = 0;
}
static void inline fastprint(int t)
{
    int a=0;
    outbuff=tmp+13;
    *outbuff='\n';
    if(obuffer_offset > BS - 11)
    {
        flush();
    }

        outbuff--;
        while(t)
        {
            a++;
            *outbuff=(t%10)+48;
            t/=10; /// improve
            outbuff--;
        }
        outbuff++;
        a++;
        //printf("%d %s",a,outbuff);
        memcpy(obuffer + obuffer_offset,outbuff,a);
        obuffer_offset +=a;
}

int main()
{
    int n;
    //freopen("2.txt","r",stdin);

    while((n=fastread())&&n)
    {
          fastprint((int)n/2);
    }
    flush();

return 0;
}


