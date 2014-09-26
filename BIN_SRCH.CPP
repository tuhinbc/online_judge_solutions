#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream.h>


	int binr(int a[],int i,int l,int x)
	{
		int mid;
		if(l==1)
		{
			if(x==a[i]) return i;
			else
			printf("\nItem not found\n");
			}
			else
			{
				mid=(floor(i+l)/2);
				if(x==a[mid])
				return mid;
				else if(x<a[mid])
				return binr(a,i,mid-1,x);
				else
				return binr(a,mid+1,l,x);
				}
				return 0;
				};




int main()
{
	int a[100],n,j,b,x,i=1,l;
	cout<<endl<<"ntr da border:";
	cin>>n;
	l=n;
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<endl<<"item to search:";
	cin<<x;
	b=binr(a,i,l,x);
	cout<<endl<<"loc="<<b);
	getch();


return 0;

}