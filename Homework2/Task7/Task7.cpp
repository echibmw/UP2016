#include <iostream>
using namespace std;

const int size=50;

void input(int* arr,int counter)
{
    for(int i=0; i<counter; i++)
        cin>>arr[i];
}


int funk(int* arr,int counter, int ch)
{
    int flag=0,i=0;

    do
    {
        if(arr[i]==ch)
        {
            flag=1;
            int c=i;
            counter--;
            do
            {
                arr[c]=arr[c+1];
                c++;
            }
            while(c!=counter-1);


        }
        i++;
    }
    while(i!=counter-1);

    if(flag==0) return false;
    if(flag==1) return true;
}



int main()
{
    int a[size],razm;

    cin>>razm;
    input(a,razm);

    int chislo;
    cin>>chislo;

    cout<<funk(a,razm,chislo)<<endl;

    return 0;
}
