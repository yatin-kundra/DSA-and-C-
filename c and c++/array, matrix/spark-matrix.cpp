#include <iostream>
using namespace std;

int main()
{
    int matrix[3][2] = {{1,0},{0,5},{0,0}};
    int counter{};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j,2;j++)
        {
            if(matrix[i][j] == 0){
                counter++;
            }
        }
    }
    int n;
    if(counter>= 4)
    {
        cout<<"the given matrix is sparse matrix"<<endl;
    }


}