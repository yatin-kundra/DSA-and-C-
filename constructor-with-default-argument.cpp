#include <iostream>
using namespace std;



class A{
int i,j;
public:
A(int a=-99, int b=-88){ i=a; j=b;}
void show(){cout<<"i="<<i<<" j = "<<j<<endl;}           
};
int main(){
A a, b(22),c(1,2);
a.show(); b.show(); c.show();	
}
