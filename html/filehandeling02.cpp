#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream file;
    file.open("yatin.txt",ios::in);

    if(file.is_open())
    {
        string line;
        while(getline(file, line ))
        {
            cout<<line<<endl;
        }

        file.close();
    }
    system("pause>0");
}


