#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
	string s,a,b,c,d;int i;
	cout<<"Enter grammar: ";cin>>s;
	for(i=3;s[i]!='/';i++)
	{
		a+=s[i];
	}
	i++;int j=i;int k=0;
	for(i;i<a.length()+j;i++)
	{
		if(a[k++]!=s[i])
		{
			cout<<"grammar has no left factoring\n";break;
		}
	}
	for(i;s[i]!='/';i++)
	{
		d+=s[i];
	}
	for(i=j;s[i]!='/';i++)
	{
		b+=s[i];
	}
	i++;
	for(i;i<s.length();i++)
	{
		c+=s[i];
	}
	cout<<s[0]<<"->"<<a<<s[0]<<"'"<<"/"<<c<<endl;
	cout<<s[0]<<"'->e/"<<d<<endl;
}