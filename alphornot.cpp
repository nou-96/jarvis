#include<iostream>
using namespace std;
int main()
{
	char alph;
	cout<<"Enter a character: ";
	cin>>alph;
	if((alph>='a'&& alph<='z') || (alph>='A' && alph<='Z'))
	{
		cout<<"Alphabet";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}
