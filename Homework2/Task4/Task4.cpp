#include <iostream>

using namespace std;

const int size=50;

void input(int* arr, int counter, int counter1 )
{
    for(int i=0; i<counter; i++)
    {
        for(int j=0; j<counter1; j++)
            cin>>arr[i*counter1+j];
    }
}

void print(int* arr, int counter, int counter1 )
{
    for(int i=0; i<counter; i++)
    {
        for(int j=0; j<counter1; j++)
        {
            cout<<arr[i*counter1+j]<<" ";
        }
        cout<<endl;
    }
}


void trans(int* arr, int  counter, int counter1, int* arr1)
{
    for(int i=0; i<counter; i++)
        for(int j=0; j<counter1; j++)
        {
            arr1[i*counter1+j]=arr[j*counter1+i];
            arr1[j*counter1+i]=arr[i*counter1+j];
        }
}


int main()
{
    int a[size][size],n,m;

    cin>>n>>m;

    input(a[m],n,m);

    int b[size][size],n1,m1;

    trans(a[m],n,m,b[n]);

    print(b[m],m,n);

    return 0;
}
