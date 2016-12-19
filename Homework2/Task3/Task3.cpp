#include <iostream>
using namespace std;

void input(int* arr,int counter)
{
    for(int i=0; i<counter; i++)
        cin>>arr[i];
}

void sort(int* arr,int counter)
{
    for(int i=0; i<counter-1; i++)
    {
        for(int j=i; j<counter; j++)
        {
            if(arr[j]<arr[i])
            {
                int ch=arr[i];
                arr[i]=arr[j];
                arr[j]=ch;
            }
        }

    }
}

void  tri(int* arr,int counter,int* arr1,int counter1,int* arr2,int* counter2)
{
    int i=0,j=0,f=0;

    do
    {
        if(arr[i]<arr1[j])
        {
            arr2[f]=arr[i];
            f++;
            if(i!=counter) i++;
        }


        else    if(arr[i]>arr1[j])
        {
            arr2[f]=arr1[j];
            f++;
            if(j!=counter1) j++;
        }


        else if(arr[i]==arr1[j])
        {
            arr2[f]=arr[i];
            f++;
            if(i!=counter) i++;
            if(j!=counter) j++;
        }


    }
    while(i!=counter||j!=counter1);

    *counter2=f;
    cout<<f<<endl;

}




void print (int* arr,int counter)
{
    for(int i=0; i<counter; i++)
        cout<<arr[i]<<" ";
}



int main()
{
    int a[50],n,b[50],m,c[50],k=0;

    cin>>n;
    input(a,n);
    sort(a,n);


    cin>>m;
    input(b,m);
    sort(b,m);

    tri(a,n,b,m,c,&k);

    print(c,k);

    return 0;
}
