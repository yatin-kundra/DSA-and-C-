#include<iostream>
using namespace std;

class A{
    int a;
    public:

    A(int A){
        a = A;
    }

    virtual void fun() = 0;

};

class B : public A{
    int b;
    public:

    B(int num){
        b = num;
    }
    void fun()
    {
        cout << b<< endl;
    }


    
};

int main(){
    A a1(100);
    B b1;
    b1.fun();
}