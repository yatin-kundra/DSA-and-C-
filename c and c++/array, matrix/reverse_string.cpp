#include <iostream>
#include <string>
using namespace std;

string revese(string& s, int i, int j)
{
    while (j>i)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }
    cout<<s<<endl;
    
}

int main()
{
    string input;
    cin>>input;

    revese(input, 0, input.length()-1);
    
    // cout<<input<<endl;
    
}