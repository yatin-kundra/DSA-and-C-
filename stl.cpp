#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){

string hello = "hefehfe";
cout<< hello.length()<<endl;
hash <string> ash_lol;
cout << "hash for yatin is :" << ash_lol("yatin") <<endl;

//vector

vector<int> v1; 
v1.push_back(10);
v1.push_back(11);
v1.push_back(12);
v1.push_back(13);
vector<int>:: iterator i;
for(i = v1.begin(); i != v1.end();i++)
cout<<*i<<endl;

}