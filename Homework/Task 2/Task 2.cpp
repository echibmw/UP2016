#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter 1st integer: "; cin>>a;
	cout<<"Enter 2nd integer: "; cin>>b;
	cout<<"Enter 3rd integer: "; cin>>c;
	if(a>0 && b>0 && c>0) {  cout<<"+"<<endl; }
	if(a<0 && b>0 && c>0) {  cout<<"-"<<endl; }
	if(a>0 && b<0 && c>0) {  cout<<"-"<<endl; }
	if(a>0 && b>0 && c<0) {  cout<<"-"<<endl; }
	if(a<0 && b<0 && c<0) {  cout<<"+"<<endl; }
	if(a>0 && b<0 && c<0) {  cout<<"+"<<endl; }
	if(a<0 && b<0 && c>0) {  cout<<"+"<<endl; }
	if(a<0 && b>0 && c<0) {  cout<<"+"<<endl; }
	if(a==0 || b==0 || c==0) {  cout<<"0"<<endl; }
	return 0;
}
