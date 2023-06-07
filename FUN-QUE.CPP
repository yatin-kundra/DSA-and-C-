#include <iostream>
using namespace std;

void fun(double a, double b){
    cout<< "foat walla hai "<< endl;
}

void fun(int a, int b){
    cout<< "int walla hai "<< endl;
}

int main()
{

    fun(5.6,9.5);
    return 0;
}