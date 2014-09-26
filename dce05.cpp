#include<stdio.h>
#include<stdlib.h>

char *buffer;

inline int initbuffer(int len) //load input
{
    int t=len*11;
    int p;
    buffer = (char*) malloc(t);
    p=fread(buffer,1,t,stdin);
    *(buffer+p)='\n';
    //printf("-----%d------",p);//*(buffer+6));
}
inline int fastread() //one integer once
{
    int result = 0;
    while(*buffer != '\n')
    {
        //putchar(*buffer);
        result = (result<<3) + (result<<1) + *buffer - 48;
        buffer++;
    }
    buffer++;
    return result;
}
inline int fastwrite(int t) //one integer once
{
    char *outbuff;
    int a=0;
    outbuff = (char*) malloc (15);
    outbuff+=12;
    *outbuff='\n';
    outbuff--;
    while(t)
    {
        a++;
        *outbuff=(t%10)+48;
        t/=10; /// improve
        outbuff--;
    }
    outbuff++;
    fwrite(outbuff,1,a+1,stdout);
}
int main()
{

    int t,a,b;
    //freopen("1.txt","r",stdin);
    //freopen("2.txt","w",stdout);
    initbuffer(1100055);

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

    fastwrite(b);

    }


    return 0;
}
