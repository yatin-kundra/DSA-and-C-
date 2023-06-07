// exceptional handeling 

#include <iostream>
using namespace std;

class A{
  
public:
    int a;
    A(int a){
        this->a = a;
    }

    
};

int main()
{
    A obj(5);
    try{
        if (obj.a < 10)
        throw "error 101";
    }
    
    catch(const char*)
    {
        cout<< "An error has accured please resolve";
        return 0;
    }
}