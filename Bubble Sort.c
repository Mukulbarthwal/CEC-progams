#include<stdio.h>
void BubbleSort(int[],int);
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
	BubbleSort(arr,n);
	Display(arr,n);
	return 0;
}
void BubbleSort(int arr[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			Swap(&arr[j],&arr[j+1]);
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
