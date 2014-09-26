#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<string.h>
//#define BS 64*1024
#define BS 1000100

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
        if(!ibuffer_offset)
        {
            ibuffer_size = read(0, ibuffer, BS);
            ibuffer_offset = 0;
        }
        if(ibuffer[ibuffer_offset] < 48)
         {
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


//int main()
//{
//    int i,a;
//    freopen("1.txt","r",stdin);
//    //freopen("2.txt","w",stdout);
//
//    for(i=0;i<5;i++)
//    {
//        a=fastread();
//        //printf("%d \n",a);
//        fastprint(a);
//    }
//    flush();
//    return 0;
//}
int main()
{

    int t,a,b;
    //freopen("1.txt","r",stdin);
    //freopen("2.txt","w",stdout);

    t=fastread();

    while(t--)
    {
        a=fastread();
    //fastwrite(a);
        if(a<2) b=1;
        else if(a<4) b=2;
        else if(a<4) b=2;
        else if(a<8) b=4;
        else if(a<16) b=8;
        else if(a<32) b=16;
        else if(a<64) b=32;
        else if(a<128) b=64;
        else if(a<256) b=128;
        else if(a<512) b=256;
        else if(a<1024) b=512;
        else if(a<2048) b=1024;
        else if(a<4096) b=2048;
        else if(a<8192) b=4096;
        else if(a<16384) b=8192;
        else if(a<32768) b=16384;
        else if(a<65536) b=32768;
        else if(a<131072) b=65536;
        else if(a<262144) b=131072;
        else if(a<524288) b=262144;
        else if(a<1048576) b=524288;
        else if(a<2097152) b=1048576;
        else if(a<4194304) b=2097152;
        else if(a<8388608) b=4194304;
        else if(a<16777216) b=8388608;
        else if(a<33554432) b=16777216;
        else if(a<67108864) b=33554432;
        else if(a<134217728) b=67108864;
        else if(a<268435456) b=134217728;
        else if(a<536870912) b=268435456;
        else if(a<1073741824) b=536870912;
        else if(a<2147483648) b=1073741824;
        else b=2147483648;

    fastprint(b);

    }

    flush();
    return 0;
}
