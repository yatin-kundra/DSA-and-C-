#include <iostream>
using namespace std;

int main()
{
    int *s;
    int a = 5;
    s = &a;
    int x = *s;

    int *r;
    s = r;

    cout<<"a : "<< a  <<" ......   s :  "<< s  << endl << *s<< endl;
    cout << "x " << x << "r " << s ;
}
