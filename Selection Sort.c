#include<stdio.h>
void SelectionSort(int[],int);
void Swap(int*,int*);
void Display(int[],int);
int main(){
	int i,j,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	SelectionSort(arr,n);
	Display(arr,n);
	return 0;
}
void SelectionSort(int arr[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{ int temp=arr[i],index=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<temp)
			{
				temp=arr[j];
				index=j;
		}
		Swap(&arr[i],&arr[index]);
		}
	}
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
