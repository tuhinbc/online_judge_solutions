#include<stdio.h>
#include<conio.h>
int Merge(int A[],int p,int q,int r)
  {
    int n1,n2,i,j,L[20],R[20],k;
    n1=q-p+1;
    n2=r-q;
    for(i=1;i<=n1;i++)
      {
	L[i]=A[p+i-1];
       }
    for(j=1;j<=n2;j++)
      {
	R[j]=A[q+j];
      }
    L[n1+1]=-32768;
    R[n2+1]=-32768;
    i=j=1;
 for(k=p;k<=r;k++)
 {
   if(L[i]<=R[j])
    {
     A[k]=L[i];
       i++;
    }
    else
     {
      A[k]=R[j];
       j++;
    }
  }
   return 0;
 }

 void msort(int t[],int i,int l)
  {
    int q;
    if(i<l)
    {
      q=(int)((i+l)/2);
      msort(t,i,q);
      msort(t,q+1,l);
      Merge(t,i,l,q);
    }
   
  }

int main()
 {
   int a[100],i=0,n;
   printf("how many number?\n");
   scanf("%d",&n);
   printf("Enter numbers:\n");
   while(i<n)
        {
	     scanf("%d",&a[i]);
         i++;
        }
  msort(a,i,n-1);
  printf("After merge sort:");
  i=0;
  while(i<n)
    {
     printf("%d",a[i]);
     i++;
    }
  getch();
  return 0;
}
