#include<stdio.h>
void InsertionSort(int[],int);
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
	InsertionSort(arr,n);
	Display(arr,n);
	return 0;
}
void InsertionSort(int arr[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		Swap(&arr[j],&arr[j+1]);
		arr[j+1]=temp;
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
