#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
	string s,a,b;int i;
	cout<<"Enter Grammar:";
	cin>>s;
	if(s[0]==s[3])
	{
		cout<<"Given grammer has left recurssion\n";
		for(i=4;s[i]!='/';i++)
		{
			a+=s[i];
		}
		i++;
		for(i;i<s.length();i++)
		{
			b+=s[i];
		}
		cout<<s[0]<<"->"<<b<<s[0]<<"'"<<endl;
		cout<<s[0]<<"'"<<"->"<<"e/"<<a<<s[0]<<"'"<<endl;
	}
	else
	{
		cout<<"Grammar has no left recursion\n";
	}
}