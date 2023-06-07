#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string fname = "yatin";
    string lname = "kundra";
    string name = fname + " " + lname;
    cout<<fname + " " + lname << endl;
    cout<< name.length(); 
    // cout << name.length() + name;     this will give us error.
}