#include <iostream>
using namespace std;
// Different types of exceptions can be caught.
void Xhandler(int test)
{try{
if(test==0) throw test;
else
throw "Value is zero";
}
catch(int i) {
cout << "Caught Exception #: " << i << '\n';}
catch(const char *str) {
cout << "Caught a string: ";
cout << str << '\n';}}
int main()
{
cout << "Start\n";
Xhandler(1);
Xhandler(2);
Xhandler(0);
Xhandler(3);
cout << "End";
return 0;
}