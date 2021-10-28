#include<iostream>
using namespace std;
int a[50],n=50,first=-1,rear=-1;

int enqueue()
{
    int i;
    if(rear == n-1)
    {
        cout << "Overflow" << endl;
    }
    else
    {
        if(first==-1)
            first=0;
        cout << "Enter element" << endl;
        cin>>i;
        rear++;
        a[rear]=i;
    }
    return 0;
}

int dequeue()
{
    if(first==-1 || first>rear)
    {
        cout << "Underflow" << endl;
    }
    else
        cout << "Deleted element: " << a[first] << endl;
}

int display()
{
    if(first==-1)
        cout<<"Empty"<<endl;
    else
    {
        cout << "Elements:" << endl;
        for(int x=first;x<=rear;x++)
        {
            cout<<a[x]<<endl;
        }
    }
}

int main()
{
    int ch;
    cout<<"1.Enqueue\n2.Dequeue\n3.Display\n4.Exit" << endl;
    do
    {
        cout<<"Choice number? "<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1: enqueue();
            break;
            case 2: dequeue();
            break;
            case 3: display();
            break;
            case 4: cout<<"exit";
            break;
            default: cout << "Ïnvalid";
        }
    }
    while(ch!=4);
    return 0;
}


