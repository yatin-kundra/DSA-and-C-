#include <iostream>
#include <string>

using namespace std;


class bank
{
    private:
    
    string name {"-"};
    int acc_no(000000000000);
    
    public:
    bank() = default;

    bank(string n, int num)
    {
        name = n;
        acc_no = num;

    }
};

int main (void)
{
    bank person1;
    cout<<"name :"<< name << endl;
}
