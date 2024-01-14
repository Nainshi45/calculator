#include<iostream>
using namespace std;
int main()
{
        int n1,n2,n3;
	cout<<"first number:"<<endl;
	cin>>n1;
	cout<<"second number:"<<endl;
	cin>>n2;
	cout<<"third number :"<<endl;
	cin>>n3;
	if(n1>n2&&n1>n3) 
	{
		cout<<"greatest number is"<<n1;
		
	}
	if(n2>n1&&n2>n3)
	{
		cout<<"greatest number is"<<n2;
	}
	if(n3>n1&&n3>n2)
	{
		cout<<"greatest number is"<<n3;
	}
	return 0;
}