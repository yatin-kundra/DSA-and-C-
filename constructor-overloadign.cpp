#include <iostream>
using namespace std;

class A{
int i;	
public:
A(){i=0;}	
A(int a){i=a;}
void show(){cout<<"i = "<<i<<endl;}
};
int main(){ 
A a(19),b;  
a.show();  
b.show();}
