#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, sum;
    
    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    // sum of two numbers in stored in variable sum
    sum = firstNumber + secondNumber;
 
    cout << firstNumber << " + " <<  secondNumber << " = " << sum;     

    return 0;
}
