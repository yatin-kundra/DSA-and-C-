#include <iostream>
using namespace std;

class Test { 
int x; 
public: Test(int x) { this->x = x; }            // this is a pointer which is pointing to x 
void show(){ cout << "x = " << x << endl; }     // and we are storing the value of x given to 
};                                              // fun. in x
int main() { 
Test obj(20); 
obj.show(); 
}
