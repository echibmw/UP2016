#include <iostream>
using namespace std;

int main()
{
	int x,y;
	cout<<"Enter 1st number: "; cin>>x;
	cout<<"Enter 2nd number: "; cin>>y;
	int z=( x>y ? x : y);
	cout<<"Result: " << (z<=0 ? z*(-1) : z ) << endl;
return 0;
}

