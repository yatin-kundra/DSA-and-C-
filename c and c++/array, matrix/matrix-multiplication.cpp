#include <iostream>
using namespace std;

int main()
{
    int matrix1[2][3] = {{1,2,3},{4,5,6}};
    int matrix2[3][2] = {{9,8},{6,5},{3,2}};
    int matrixmultiply[2][2] = {};
    int arr1[] ={};
    int arr2[] ={};

    for(int i=0;i<2;i++)
    {   int sum=0;
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<3;k++){
             
                matrixmultiply[i][j]+= matrix1[i][k]*matrix2[k][j];
            }  
        }
    }

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<matrixmultiply[i][j]<<" ";
        }
        cout<<endl;
    }



}