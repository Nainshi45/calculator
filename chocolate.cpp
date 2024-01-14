#include<iostream>
#include<algorithm>
using namespace std;
int findmindiff(int arr[],int m,int n)
{
	int diff,min=INT_MAX;
	if(n==0||m==0)
	{
		return 0;
	}
	if(n<m)
	{
		return -1;
	}
	cout<<" before sorted array is :";
	for(int i=0;i<9;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	cout<<" After sorted array is :";
	sort(arr,arr+n);
	
		for(int i=0;i<9;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i+m-1<9;i++)
	{
		diff=arr[i+m-1]-arr[i];
		if(diff<min)
		{
			min=diff;
		}
	}
	return min;
}
int main()
{
	int m,n=9;
	cout<<" Enter number of students:";
	cin>>m;
	//cout<<" Enter size of array:";
//	cin>>n;
	int arr[]={7,6,4,9,5,7,2,6,9};
	cout<<findmindiff(arr,m,n);
	return 0;
}