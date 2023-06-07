#include <iostream>
using namespace std;

void reverse(string &s, int i, int j)
{
    if(i>j)
    {
        return ;
    }

    swap(s[i], s[j]);
    i++;
    j--;
    reverse(s, i, j);
}

int main()
{
    string input;
    cin>>input;

    reverse(input, 0, input.length()-1);
    cout<<input<<endl;
}