#include<iostream>
using namespace std;
int main()
{
    int a, sum=0;
    cout << "The first 10 numbers:" << endl;
    for(a=1;a<=10;a++)
    {
        cout << a << endl;
        sum=sum+a;
    }
    cout << "\nSum = " << sum << endl;
    return 0;
}
