//find pair with sum in the array if possible return true else false 
#include<iostream>
#include<algorithm>
using namespace std;
bool pairo(int arr[],int n,int sum)
{
	int i,j=n-1;
	// sort the elements in the array
    sort(arr,arr+6);	
	while(i<n)
	{
		if(arr[i]+arr[j]==sum)
		{
			return true;
		   
		}
		else if(arr[i]+arr[j]>sum)
		{
		j--;
		}
		else if(arr[i]+arr[j]<sum)
		{
			i++;
			}
		
	}
	return false;
}
int main()
{
	//int arr[]={11,15,26,38,9,10},sum=45;// give  output false
	int arr[]={11,15,6,8,9 ,10},sum=16;//give output true
	int n=sizeof(arr)/sizeof(arr[0]);
	if(pairo(arr,n,sum))
	{
		cout<<" true";
	}
	else
	{
		cout<<"false";
	}
	
	return 0;
}
