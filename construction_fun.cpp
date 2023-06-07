// garbage value is coming along with the value assigned

#include <iostream>

using namespace std;

class classa
{
    private:
        int A;

    public:
        classa(){
            int A = 1;
        }

            // getter
        int get_a()
        {
            cout<<"value of a is: " << A << endl;
            
        }

            //setter
        void set_a(int a)
        {
            A = a;
        }
};

class classb
{
    private:
        int B;

    public:
        classb()
        {
            int B = 5;
        }

            // getter
        int get_b()
        {
            cout<<"value of B is: " << B << endl;

        }

            //setter
        void set_b(int b)
        {
            B = b;
        }
};

int main()
{
    classa obja;
    obja.set_a(5);
    cout<< obja.get_a() << endl;

}

