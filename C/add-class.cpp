#include <iostream>
using namespace std;

class A{
    private:
    int a;


    public:
    A(int num){
        a = num;
    }
    
    friend int add(A a, B b);

};

 

class B{
    private:
    int b;

    public:
    B(int num){
        b = num;
    }
    ;
    
    int add(A a, B b)
{
    int result;
    result = a.a + b.b; 
    return result;
}
};




int main()
{
    A a1(5);
    B b1(10);

    cout<< "a + b = "<< add(a1,b1) << endl;

}
