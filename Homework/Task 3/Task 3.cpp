#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout << " Input 2 numbers " << endl;
    cin >> x >> y;
    int sum = (x+y);
    sum % 2 == 0 ? sum *= 2 : sum /= 2;
    cout << "The sum is: " << sum << endl;
    return 0;
}
