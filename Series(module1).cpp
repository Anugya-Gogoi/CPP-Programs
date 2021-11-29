#include<iostream>
using namespace std;
class Series
{
    public: float sum(float n)
    {
        float a,b=0;
        for(a=1; a<=n;a++)
            b=b+(a/(a+1));
        return b;
    };
};

int main()
{
    Series s;
    float n=3;
    cout << "Sum=" << s.sum(n);
    return 0;
}
