#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    fstream file1; 
    fstream file2; 
    
    file1.open("copy.txt", ios::out); 
    
    file1<<"HHHHHHHHHH"; 
    
    file1.close();
    

    
    file1.open("copy.txt", ios::in);
    
    file2.open("copied.txt", ios::out) ;
    
    string s; 
    
    while(getline(file1,s)) {
        file2<<s<<"\n";
    }
    
    file1.close();
    file2.close();
    
    file2.open("copied.txt", ios::in); 
    
    while(getline(file2,s)) {
        cout<<s<<"\n";
    }
    s
    
    file2.close();
    
    return 0;
    
}