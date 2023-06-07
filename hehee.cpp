#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("m.txt", ios::app); // output file
    if (file.is_open())
    {
        file<< "hello you \n";
        file<< "how are you \n";
        file<< "what are you doing  \n";
        file.close();
    }

    system("pause>0");
}