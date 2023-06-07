#include <iostream>
using namespace std;

class Test {
int i;
public: Test(){i=12;}
friend void show(Test t);
};


void show(Test t){cout<<"i="<<t.i<<endl;}


int main(){
Test t; show(t);
} 
