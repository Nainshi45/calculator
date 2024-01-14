#include<iostream>
#include<string>
using namespace std;

int main()
{
	
	int a=665,b=99;
	
	string d=to_string(a);//conversion from integer to string
	string h=to_string(b);
	string k=h+d; //concatenation
	cout<<"k="<<k;    
	cout<<"d="<<d<<"h="<<h;
	
	int s=stoi(k); // conversion from string to integer
	cout<<"s="<<s;
	return 0;
}