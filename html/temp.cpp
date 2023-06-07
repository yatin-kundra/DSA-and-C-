#include <iostream>
using namespace std;

class square;

class rec{
    int len;
    int bre;
    public:

     rec(square s);

    void dis()
    {
        cout<<"len " <<len<<endl;
        cout<<"bre " <<bre<<endl;
    }

    friend  class square;
};


class square{
    int side;
    public:
    square(int s1){
        side = s1;
    }

    friend class rec;

};

rec::rec(const square s){
    len = s.side;
    bre = s.side;

}


int main()
{
    square square1(100);
    rec rec1(square1);
    rec1.dis();
}