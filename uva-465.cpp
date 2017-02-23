#include<iostream>
#include<cstring>
#include<cstdlib>
#define n 800
#define nn 2147483647
using namespace std;

main()
{
	char s1[n],s2[n];
	char ch;
	double a;
	while(cin>>s1>>ch>>s2)
	{
		cout<<s1<<" "<<ch<<" "<<s2<<endl;
		if(atof(s1)>nn)
			cout<<"first number too big"<<endl;
		if(atof(s2)>nn)
			cout<<"second number too big"<<endl;
		if(ch=='+')
			a=atof(s1)+atof(s2);
		else if(ch=='*')
			a=atof(s1)*atof(s2);
		if(a>nn)
			cout<<"result too big"<<endl;
	}
}

