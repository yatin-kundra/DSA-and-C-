// .........................  good question  .....................

#include <iostream>
using namespace std;

int main()
{
    int x;
    int *p;
    int *q;
    p= new int[10];     // 10 contineous chunk of memory is alloted for ints 
    q = p;          // p pointer is equivalent to q
    *p = 4;     // *p is the value not address
        for(int j=0; j<10; j++)
        {
            x=*p;           /*value at 1st position of p is 4 alloted above is not assigned to x
                        p++ is like p = p +1   i.e.  the pointer is now pointing to the second block
                        alloted to int the memory

                        *p is the value at the second block at which now our pointer is pointing
                        *p = x +j means that 4 a+ value of j 
                        first block of p contains 4 as *p is initialy 4 and now *p is 4 a+j (0,1,2,3,...)

                        */



            p++;
            *p = x + j;

        }

        for(int k=0; k<10; k++)
        {
            cout<<*q << " " << endl;

            // q pointer is equivalent to p pointer
            // that means whatever place p was pointing same place 
            // q will be poining and q = p so the value of *p will also be
            // equal to *q


            q++;  // this is changing the poition of the pointing arrow from one block to other

        }

        cout<<endl;
        return 0;

    
}