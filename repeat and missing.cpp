#include<iostream>
#include<cmath>
using namespace std;
int* repeat_missing(int arr[],int n)
{
	
	int *result=new int[2];
	int orsum=0;
	int currsu=0;
	for(int i=0;i<n;i++)
	{
		int orelement=abs(arr[i]);
		int index=orelement-1;
		if(arr[index]<0)
		{
			result[0]=orelement;
			
			
		}
		currsu+=orelement;
		
		arr[index]=-arr[index];
		orsum+=(i+1);
		
		
		
	}
	
	result[1]=orsum-(currsu-result[0]);
	
	return result;
}
int main()
{
	int n,*ptr;
	cout<<" size of array:";
	cin>>n;
	int arr[n];
	cout<<" enter elements in the array:";
	for(int i=0;i<n;i++)
		{
		cin>>arr[i];
	}
    ptr= repeat_missing(arr,n);
    cout<<" answer is:";
   	cout<<ptr[0]<<" "<<ptr[1];
   
return 0;
}
/*
 size of array:5
 enter elements in the array:3
1
2
5
3
 answer is:3 4
 */