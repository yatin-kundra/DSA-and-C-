#include <iostream>
using namespace std;

int main() { 
int *i = new int;   // allocate one int space
cout<<"Enter integer value: ";
cin>>*i;
cout << endl << "*i = " << *i << endl;
delete i;   // clear int space
}
