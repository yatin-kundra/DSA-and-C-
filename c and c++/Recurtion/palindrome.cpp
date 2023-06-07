#include <iostream>
using namespace std;

bool ispelendrome(string s, int i, int j)
{
    if(i>j)
    return true;

    if(s[i] == s[j])
    return true;

    else
    return false;

    i++;
    j--;

    ispelendrome(s,i,j);


}


int main()
{
    string input;
    cin>>input;

    if(ispelendrome(input, 0, input.length()-1) == 1)
    {
        cout<<"the input string is a pelendrome"<<endl;
    }
    else
    cout<<"the input string is not a pelendrome"<<endl;
}