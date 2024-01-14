#include<iostream>
using namespace std;
int flag=1 ;
void reverse(int arr[],int start,int end)
{int temp;
  while(start<end)	
{
	temp=arr[start];
	arr[start]=arr[end];
	arr[end]=temp;
	start++;
	end--;
}
}
int *permutation(int arr[])
{
	int i=3-2,j=3-1;
	while(i>0)
	{
	if(arr[i]>arr[i+1])	
	{ 
		i--;
	}
	else
	{
		flag=0;
		if(arr[i]<arr[j])
		{  flag==1;
			swap(arr[i],arr[j]);
			break;
		}
		j--;
	}

	}
	if(flag==1)
	{
		reverse(arr,0,2);
	 } 
	
	return arr;
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

int main()
{
	int arr[3]={3,2,1},*n;

n=permutation(arr);

	cout<<" answer is :";
	for(int i=0;i<3;i++)
	{
		cout<<arr[i];
	}
	return 0;
	
	
}