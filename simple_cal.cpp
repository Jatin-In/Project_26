#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    char opr;
    
    cout << "Enter First Number : ";
    cin >> num1;

    cout << "Enter Second Number : ";
    cin >> num2;

    cout << "Enter Operation : ";
    cin >> opr;

    if (opr == '+')
    cout << num1 << "+" << num2 << "=" << num1 + num2;
 
 
    if (opr == '-')
    cout << num1 << "-" << num2 << "=" << num1 - num2;
 
 
    if (opr == '*')
    cout << num1 << " x " << num2 << "=" << num1 * num2;
 
 
    if (opr == '/')
    cout << num1 << "/" << num2 << "=" << num1 / num2;
 
 
    return 0;
}