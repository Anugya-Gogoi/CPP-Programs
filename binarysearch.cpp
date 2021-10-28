#include<iostream>
using namespace std;
int main()
{
    int l, i, arr[50], num, j, temp, left, right, mid;
    cout<<"Enter the size of array: ";
    cin>>l;
    cout<<"Enter the elements: ";
    for(i=0; i<l; i++)
        cin>>arr[i];
    for(i=0; i<(l-1); i++)
    {
        for(j=0; j<(l-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout<<"\nThe sorted array is:" << endl;
    for(i=0; i<l; i++)
        cout<<arr[i]<<endl;
    cout<<"\nEnter element to search: ";
    cin>>num;
    left = 0;
    right = (l-1);
    mid = (left+right)/2;
    while(left<=right)
    {
        if(arr[mid]<num)
        {
            left = mid+1;
        }
        else if(arr[mid]==num)
        {
            cout<<"\nThe element is found at position number: "<<mid+1;
            break;
        }
        else
            right = mid-1;
            mid = (left+right)/2;
    }

    if(left>right)
        cout<<"\nThe number is not found in array"<<endl;
    return 0;
}
