#include <iostream>
using namespace std;

const int size=50;

void input(double* arr,int counter)
{
    for(int i=0; i<counter; i++)
        cin>>arr[i];
}

double sr(double* arr,int counter)
{
    double Srar[counter];
    for(int i=0; i<counter; i++)
    {
        if(i==0) Srar[i]=arr[i+1];
        if(i==counter-1) Srar[i]=arr[i-1];
        if(i!=0&&i!=counter-1) Srar[i]=(arr[i-1]+arr[i+1])/2;
    }

    int flag=0,ch;
    for(int j=counter-1; j>=0; j--)
    {
        if(arr[j]==Srar[j])
        {
            flag=1;
            ch=j;
            break;
        }
    }
    if(flag==1) return ch;
    if(flag==0) return -1;

}


int main()
{
    double a[size],n;

    cin>>n;
    input(a,n);

    cout<<sr(a,n)<<endl;

    return 0;
}
