#include<iostream>
using namespace std;
void merge(int a[],int l, int m,int r)
{
	int n1= m-l+1;
	int n2=r-m;
	int L[n1],R[n2];
	//Copying elements to the left and the right sub-arrays.
	for(int i=0;i<n1;i++)
		L[i]=a[l+i];
	for(int i=0;i<n2;i++)
		R[i]=a[m+i+1];
	//Comparing elements from sub arrays and then insert them in an original array in a sorted order.
	int i=0,j=0,k=l;
	while(i<n1&&j<n2)
	{
		if(L[i]<R[j])
			a[k++]=L[i++];
		else
			a[k++]=R[j++];
	}
	//Adding the remaining elements in an original array.
	while(i<n1)
		a[k++]=L[i++];
	while(j<n2)
		a[k++]=R[j++];
}

void m_sort(int a[],int l, int r)
{
	int mid;
	if(l<r){
		mid=l+(r-l)/2;
		m_sort(a,l,mid);
		m_sort(a,mid+1,r);
		merge(a,l,mid,r);
	}
}

int main()
{
	int l=0,r,n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	r=n-1;
	m_sort(a,l,r);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
