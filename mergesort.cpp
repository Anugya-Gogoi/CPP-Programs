#include<iostream>
using namespace std;
int main()
{
    int arr1[30], arr2[30], merged[80];
	int size1, size2, i, k;
    cout<<"Enter the size of first array: "<<endl;
    cin>>size1;
    cout<<"Enter elements of first array: "<<endl;
    for(i=0; i<size1; i++)
    {
        cin>>arr1[i];
        merged[i] = arr1[i];
    }
    k = i;
    cout<<"Enter the size of second Array: "<<endl;
    cin>>size2;
    cout<<"Enter elements of second Array: "<<endl;
    for(i=0; i<size2; i++)
    {
        cin>>arr2[i];
        merged[k] = arr2[i];
        k++;
    }
    cout<<"\nThe merge-sorted array is: ";
    for(i=0; i<k; i++)
        cout<<merged[i]<<" ";
    cout<<endl;
    return 0;
}
