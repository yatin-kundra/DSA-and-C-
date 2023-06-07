#include <iostream>
// #include <string>
using namespace std;

string sayInWords(string arr[], int number)
{
    if(number == 0)
        return "";

    int digit = number%10;
    number = number/10;

    sayInWords(arr, number);
    cout<<arr[digit]<<endl;
}

int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int size = sizeof(arr)/ sizeof(string);
    // cout<<size<<endl;
    int n ;
    cin>>n;
    sayInWords(arr, n);
}