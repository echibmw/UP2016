#include <iostream>
using namespace std;

int main()
{
	int x;
	cout<<"Enter an integer: "; 
	cin>>x;
	switch(x)
	{
		case 1:
		case2:
		case3:
	    	cout<<x*10; break;
					
		case 4:
		case 5:
		case 6:
			cout<<x*100; break;
			
		case 7:
		case 8:
		case 9:
			cout<<x*1000; break;
		default :
			cout<<"Invalid input. ";
	}
	return 0;
}

