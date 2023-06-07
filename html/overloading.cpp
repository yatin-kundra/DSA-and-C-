#include <iostream>
using namespace std;

class base{
    int a;

public:

    base(){

    }
    base(int a)
    {
        this->a=a;
    }

    base operator +(base const &Base){
        base bb;
        bb.a = a + Base.a;
        return bb; 
    }

    void show(){
        cout<<a<<endl;
    }

};

int main(){
    base b1(5);
    base b2(70);
    base b3(0);
    b3 = b1 + b2;
    b3.show();
}