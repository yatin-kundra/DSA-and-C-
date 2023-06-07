#include<iostream>
#include<string>

using namespace std;

class car{
    string Name;
    string Type;
    int NoOfWheels;

    public:
        car(){
            Name = "CAR";
            Type = "CAR-TYPE";
            NoOfWheels = 4;

            cout<<"this is default constructor."<<endl;
            cout<<"name "<< Name << "type " << Type << "number of wheels " << NoOfWheels << endl;

        }

        car(string name, string type, int NOOfWheels)
        {
            Name = name;
            Type = type;
            NoOfWheels = NOOfWheels;

            cout<<"this is parameterised constructor."<<endl;
            cout<<"name "<< Name << " type " << Type << " number of wheels " << NoOfWheels << endl;


        }
        ~car(){
                cout<<"this is default destructor."<<endl;

        }

};


int main()
{
    car car1 = car("buggati", "pertol", 4);
    car car2;
        
}