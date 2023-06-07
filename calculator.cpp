

//  POINTERS REQUIRED TO MAKE IT WORK CAUSE IT DOESN'T KNOW WHERE IS OPERATOR



#include <iostream>

using namespace std;

int calculator(int num1, char op, int num2);

// char op(char ch);

int main()
{
    int num1,num2;
    char ch;
    cout<<"Enter the first number : " << endl;
    cin >> num1;
    cout << "Enter the operation sign : " << endl;
    cin >> ch;
    cout << "Enter the second number : " << endl;
    cin >> num2;

    cout << "The result of the operation is " << calculator(num1,ch,num2) << endl;
}

// function for calculator.

int calculator(int num1, char op, int num2)
{
    int result;
    if(op=='+')
    result = (num1 + num2);
    return result;
}

// function for operator.

char op(char ch)
{
    return ch;
}
