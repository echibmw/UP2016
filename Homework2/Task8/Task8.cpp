#include <iostream>
using namespace std;

const int size=50;

void input(int* arr,int counter)
{
    for(int i=0; i<counter; i++)
        cin>>arr[i];
}


int search1(int* arr,int counter,int num)
{
    int *p;
    int flag=0;
    for(int i=0; i<counter; i++)
        if(arr[i]==num)
        {
            flag=1;
            p=&i;
            break;
        }

    if(flag==0) return NULL;
    if(flag==1) return *p;
}


int main()
{
    int a[size],n;

    cin>>n;
    input(a,n);

    int number;

    cin>>number;

    cout<<search1(a,n,number)<<endl;

    return 0;
}
