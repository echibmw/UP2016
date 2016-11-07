#include <iostream>
using namespace std;

int main()
{
	int a,b,c,d,e;
	cout<<"First number: "; cin>>a;
	cout<<"Second number: "; cin>>b;
	cout<<"Third number: "; cin>>c;
	cout<<"Fourth number: "; cin>>d;
	cout<<"Fifth number: "; cin>>e;
	if(a>b && a>c && a>d && a>e)
	{  cout<<a<< " is the biggest number!";}
	else if(b>a && b>c && b>d && b>e)
	{  cout<<b<< " is the biggest number!";}
	else if(c>a && c>b && c>d && c>e)
	{  cout<<c<< " is the biggest number!";}
	else if(d>a && d>b && d>c && d>e)
	{  cout<<d<< " is the biggest number!";}
else if(e>a && e>b && e>c && e>d)
	{  cout<<e<< " is the biggest number!";}
	
	return 0;
	
}
