#include<stdio.h>
//#include<conio.h>

void max_heapify(int a[], int i, int hs)
{
    int L, R, largest;
    L = 2*i;
    R = 2*i+1;
    if(L<=hs && a[L]>a[i])
	 largest = L;
    else largest = i;
    if(R<=hs && a[R]>a[largest])
	largest = R;
    if(largest != i)
    {
	int k;
	k = a[i];
	a[i] = a[largest];
	a[largest] = k;
	max_heapify(a, i, hs);
    }
}

void bmheap(int a[], int hs)
{
   for(int i = hs/2 ; i>=1; i--)
   max_heapify(a, i, hs);
}


void heap_sort(int a[], int n)
{
    int k, i;
    int hs = n;
    bmheap(a,hs);
    for(i=n; i>1; i--)
      {
	k = a[1];
	a[1] = a[i];
	a[i] = k;

	hs--;
	max_heapify(a, 1,hs);
      }
}


int main()
{
 //clrscr();
 int i, a[100], n;
    printf("how many number you want to sort:");
    scanf("%d", &n);

    printf("un-sorted data:\n\n");
    for (i=1; i<=n; i++)
      scanf("%d", &a[i]);

    heap_sort(a, n);

    printf("\nsorted array:\n\n");
    for(i=1; i<=n; i++)
	printf( "   %d\n", a[i]);
   // getch();
}
