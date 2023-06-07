#include <iostream>
#include <string>
using namespace std;
class rupee; 
class dollar {
    int value; 
    public:
    void display() {
        cout<<value<<endl;
    }
    dollar(rupee); 
    dollar() {};
    friend class rupee;
};

class rupee {
    int val ;
    public:
    rupee(int x) {
        val = x;
    }
    friend class dollar;
};

dollar::dollar(rupee r) {
    value = 70*r.val;
}

int main() {
    rupee r(100);
    dollar d(r);
    d.display();
    return 0;
}