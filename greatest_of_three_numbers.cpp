#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter three numbers" << endl;
    cin>> a >> b >> c;

    if(a>=b && a>=c)
    {
        cout << "Greater:" << a;
    }
    else if(b>=a && b>=c)
    {
        cout<<"Greater:"<<b;
    }
    else if(c>=a && c>=b)
    {
        cout<<"Greater:"<<c;
    }
    else if(a==b==c)
    {
        cout<<"All equal";
    }
    else
    {
        cout<<"Invalid";
    }

    return 0;
}
