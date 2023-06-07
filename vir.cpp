#include <iostream>
using namespace std;
class base{
    int a ;
    public:
    void show(){
        cout<<"this is base class" << endl;

    }

};

class derived : public base{
    public:
    void show(){
        cout<<"this is derived class" << endl;
    }
};

int main(){
    base b;
    b.show();
    derived d;
    d.show();
}