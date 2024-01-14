/* IN this type of question you need to reverse your array with
 two times first whole and then individually*/
#include<algorithm>
 #include<iostream>
 
 using namespace std;
 void reverse(int arr[],int start,int end)
 {
 	int temp;
 	while(start<end)
 	{
 		temp=arr[start];
 		arr[start]=arr[end];
 		arr[end]=temp;
 		start++;
 		end--;
	 }
 }
 void rotate(int arr[],int start,int n,int d)
 {
 	
 	d=d%n;
 	reverse(arr,0,d-1);
 	reverse(arr,d,n-1);
 	reverse(arr,0,n-1);
 }
 int main()
 {
 	int arr[7]={1,2,3,4,5,6,7},d=3,item,flag=0,j;
 	cout<<" before rotated:"<<endl;
 	for(int i=0;i<7;i++)
 	{
 		cout<<arr[i]<<" ";
	 }
	 
	 rotate(arr,0,7,d);
	 
	 cout<<endl<<" after rotation:"<<endl;
	 for(int i=0;i<7;i++)
	 {
	 	cout<<arr[i]<<" ";
	 }
	 cout<<endl<<" Enter element for searching:";
	 cin>>item;
	 for( j=0;j<7;j++)
	 {
	 	
	 
	if(arr[j]==item)
	{
		flag=1;
		break;
	 } 

}
if(flag==1)
cout<< " found at index"<<" "<<j;
else
cout<<" not found";
 	return 0;
 }
 /*
 before rotated:
1 2 3 4 5 6 7
 after rotation:
4 5 6 7 1 2 3
 Enter element for searching:10
 not found
 */