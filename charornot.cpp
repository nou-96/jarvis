#include<iostream>
using namespace std;
int main()
{
	char alph;
	cout<<"Enter a character: ";
	cin>>alph;
	if((alph>='a'&& alph<='z') || (alph>='A' && alph<='Z'))
	{
		cout<<alph<<" is an alphabet";
	}
	else
	{
		cout<<alph<<" is not an alphabet";
	}
	return 0;
}
