#include <iostream>
using namespace std;

class shape{

protected:
    int length;
    int breadth;

public:
    shape(int length = 0, int breadth = 0) 
    {
        this->length = length;
        this->breadth = breadth;
        // cout<<length << endl;
        // cout<<breadth << endl;

    }

    void set_length(int length)
    {
        length = this->length;
        
    }

    void set_breadth(int breadth)
    {
        breadth = this->breadth;

    }

     int area()
    {
        return(length*breadth);
    }

};


class rectangle : public shape{
public:
     int area(){
        return(5*5);
        
    }

};
 
int main()
{
    // shape *s;
    rectangle r;
    // s = &r;
    cout<< "the area of rectangle is: " << r.area()<< endl;
   
}