#include<stdio.h>
void QuickSort(int[],int,int);
int Partition(int[],int,int);
void Swap(int*,int*);
void Display(int[],int);
int main()
{
	int t,i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{	
		scanf("%d",&arr[i]);
	}
	QuickSort(arr,0,n-1);
	Display(arr,n);
	return 0;
}

void QuickSort(int arr[],int l,int r)
{
	int x;
	if (l<r)
	{
		x=Partition(arr,l,r);
		QuickSort(arr,l,x-1);
		QuickSort(arr,x+1,r);
	}
}
int Partition(int arr[],int l,int r)
{
	int pivot=arr[r];
	int i=l-1,j;
	for (j=l;j<r;j++)
	{
		if (arr[j]<pivot)
		{
			i++;
			Swap(&arr[i],&arr[j]);
		}
	}
	Swap(&arr[i+1],&arr[r]);
	return i+1;
}
void Swap(int*a,int*b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void Display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
