#include <iostream>
using namespace std;

const int size=50;

void input(int* arr,int counter)
{
    for(int i=0; i<counter; i++)
        cin>>arr[i];
}

void swap(int* prom,int* prom1)
{
    int* ch= prom;
    *prom=*prom1;
    *prom1=*ch;
}

void reverse(int* arr,int counter)
{
    for(int i=0; i<=counter/2; i++)
        swap(arr[i],arr[counter-i-1]);

}


void print (int* arr,int counter)
{
    for(int i=0; i<counter; i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int a[size],n;
    cin>>n;

    input(a,n);
    reverse(a,n);
    print(a,n);

    return 0;
}
