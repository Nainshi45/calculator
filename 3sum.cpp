#include<iostream>
#include<algorithm>
using namespace std;
void threesum(int arr[],int n,int target)
{
	// sort your array
   sort(arr,arr+6);
	for(int i=0;i<n;i++)
	{
		int lo=1+i,end=n-1;
		while(lo<end)
		{
			int current=arr[i]+arr[lo]+arr[end];
			if(current==target){
			 cout<<" group is";
				cout<<arr[i]<<" ";
				cout<<arr[lo]<<" ";
				cout<<arr[end]<<" ";
				break;
			}
			else if(current <target)
			{
				lo++;
			}
			else
			{
				end--;
			}
		}
	}
}
int main()
{
	int arr[]={-1,0,1,2,-1,-4},target=0;
	int n=sizeof(arr)/sizeof(arr[0]);
	threesum(arr,n,target);
	return 0;
}
//group is-1 -1 2  group is-1 0 1