#include<iostream>
using namespace std;

int main()
{
    int num1, num2, n;
    char ch;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Enter the operation to be performed(+,-,*,/): ";
    cin>>ch;

    switch (ch)
    {
    case '+':
        n = num1 + num2;
        cout<<"Sum = "<<n;
        break;
    case '-':
        n = num1 - num2;
        cout<<"Difference = "<<n;
        break;
    case '*':
        n = num1 * num2;
        cout<<"Product = "<<n;
        break;
    case '/':
        n = num1 / num2;
        cout<<"Quotient = "<<n;
        break;
    
    default:
        cout<<"Invalid input";
        break;
    }
    return 0;
}