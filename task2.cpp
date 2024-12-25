//CALCULATOR:

#include<iostream>
#include<cmath>
using namespace std;

double add(double num1, double num2)
{
    return num1 + num2;
}

double substract(double num1, double num2)
{
    return num1 - num2;
}

double multiply(double num1, double num2)
{
    return num1 * num2;
}

double divide(double num1, double num2)
{
    if(num2 != 0)
        return num1 / num2;
    else
    {
        cout<<"Can't divide by zero!!"<<endl;
        return 0;
    }
}

double modulo(double num1, double num2)
{
    if(num2 != 0)
        return fmod(num1, num2);
    else
    {
        cout<<"Can't divide by zero!!"<<endl;
        return 0;
    }
}

double operation(double a, double b, char operators)
{
    switch (operators)
    {
        case '+':
            return add(a, b);
            break;
        
        case '-':
            return substract(a,b);
            break;

        case '*':
            return multiply(a, b);
            break;
        
        case '/':
            return divide(a, b);
            break;
        
        case '%':
            return modulo(a, b);
            break;

        default:
            cout<<"Enter a valid operator!!!"<<endl;
            return 0;
    }
}

int main()
{
    double num1, num2;
    char operators;

    cout<<"Enter first number : ";
    cin>>num1;

    cout<<"Enter second number : ";
    cin>>num2;

    cout<<"Enter a valid operator : ";
    cin>>operators;

    double answer = operation(num1, num2, operators);
    cout<<"Answer : "<<answer<<endl;

    return 0;
}