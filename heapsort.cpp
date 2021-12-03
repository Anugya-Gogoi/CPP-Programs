#include <iostream>
using namespace std;
void heapify(int a[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && a[left] > a[largest])
        largest = left;
    if (right < n && a[right] > a[largest])
        largest = right;
    if (largest != i) {
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        heapify(a, n, largest);
    }
}

void heapSort(int a[], int n)
{

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);
    for (int i = n - 1; i >= 0; i--) {
        int temp = a[0];
        a[0] = a[i];
        a[i] = temp;
        heapify(a, i, 0);
    }
}

void display(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout<<a[i]<<" ";
    }

}

int main()
{
   int s;
    cout<<"Enter the array size : "<<endl;
    cin>>s;
    int a[s];
    cout<<"Enter the array: "<<endl;
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
    int n = sizeof(a) / sizeof(a[0]);
    cout<<"Array before sorting:\n";
    display(a, n);
    heapSort(a, n);
    cout<<"\n";
    cout<<"Array after sorting:\n";
    display(a, n);
    return 0;
}
