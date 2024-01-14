#include<iostream>
using namespace std;
void repeat(int size,int arr[])
{
	int r,j=0,count=0;
	for(int j=0;j<size;j++)
	{
		count=0;
		for(int i=0;i<size;i++)
	{
		
		if(arr[j]==arr[i])
        {
        	count++;
		}
		

	}
	if(count>1)
		{
			cout<<endl<<"true";
			break;
		}
		else
		{
			cout<<endl<<"false";
			break;
		}
}

}
int main()
{
	int  size;
	cout<<" Enter size of array:";
	cin>>size;
	int arr[size];
	cout<<" Enter elements  in array:";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	cout<<" inputed Array is :";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	repeat(size , arr);
	
	return 0;
}

/*Enter size of array:5
 Enter elements  in array:6
7
8
6
5
 inputed Array is :6 7 8 6 5
true
*/