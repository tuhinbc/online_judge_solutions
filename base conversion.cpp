#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int in_base_to_dec_base(char instr[],int inbase)
{
    int i=0,res=0,p=0;

    while(instr[i])            //determine input string length
         i++;

    if(i) i--;                 //special condition (i=0)

    while(i>=0)
    {
         res+=(instr[i]-48)*pow(inbase,p);  //ascii 48 = 0 (decimal)
         p++;
         i--;
    }

return res;
}

void dec_base_to_out_base(int tmp,int outbase,char outstr[20])
{
    int i=0;
    while(tmp)
    {
         outstr[i]=tmp%outbase+48;
         tmp/=outbase;
         i++;
    }

    outstr[i]='\0';
}

int main()
{
    int in,inbase,outbase,tmp;
    char instr[20],outstr[20];
//input number & base
    while(in)            //since input is invalid
    {
         in=0;
         cout<<"Enter Input Number : ";
         cin>>instr;                                  //input string
         cout<<"Enter Base of Input Number : ";
         cin>>inbase;                                 //input base
         //checking input validity
         char *p;
         p=instr;
         while(*p)
         {
                  if(*p>57) *p=*p-7;            //ascii 57 = 9 (decimal)
                                                // ascii 65 = A
                                                // here a gap between 58 - 64
                                                //eliminating the gap for easy calculation
                  if((*p-48)>=inbase){ in++;        //each single number never can be
                                       break;       //greater than the base
                                       }
                  *p++;
         }

         if(in) cout<<"\n\n###Given Number is invalid to the Corresponding Base###\n\n\n";
    }
//output  base
    cout<<"Enter Base of Output Number : ";
    cin>>outbase;                               //output base

//convert input number(other base) to decimal base
    tmp=in_base_to_dec_base(instr,inbase);

//convert number(decimal base) to other base
    dec_base_to_out_base(tmp,outbase,outstr);

    strrev(outstr);                       //remainders should take from last
    char *p;
    p=outstr;
    while(*p)
    {
         if(*p>57) *p=*p+7;            //de-eliminating the gap between 58 -64
         *p++;
    }

    cout<<"\nOutput is :"<<outstr;
return 0;
}
