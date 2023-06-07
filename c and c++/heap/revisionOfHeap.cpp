//              MAX HEAP 

#include <iostream>
using namespace std;

class heap
{
    public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insertInHeap(int data)
    {
        size++; // this is the size of out heap
        int index = size;   

        arr[index] = data;  // element is inserted in the array 

        // now we will take it to its correct positon

        while(index > 1)
        {
            int parenetIndex = index/2; 

            // parent should always be greater than its child for max heap
            if(arr[parenetIndex] < arr[index])
            {
                swap(arr[parenetIndex], arr[index]);
                index = index/2;    // i.e. going to the parent's index
            }

            else
            {
                return ;
            }
        }  
        
    }

    void print()
    {
        for(int i=1; i<=size; i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

    // my code nahi chal reha ,  maybe case ki agar last ch full te complete bst bangaya te size > i hai lekin aage koi node nahi hai

    // now its working 
    void deletionOfNode()
    {
        arr[1] = arr[size];
        size--;
        int i = 1;

        while(i<size)
        {

            int maxi = max(arr[i*2], arr[i*2+1]);
            if(size/2 +1 < i)
            break;
            if(arr[i] < maxi)
            {
                int node = arr[i];
                // swap(maxi, arr[i]);
                if(maxi == arr[i*2])
                {
                    i = i*2;
                }

                else
                {
                    i = i*2+1;
                }

                arr[i] = node;
                arr[i/2] = maxi;

            }

            
        }
    }


// code form comments

    // void deletionOfNode()
    // {
    //     int i = 1;
    //     arr[i] = arr[size];
    //     size--;
        
    //     while(i<size)
    //     {
    //         int l = i*2;
    //         int r = i*2+1;
    //         if(i<size && arr[i] < arr[l] && arr[l] > arr[r])
    //         {
    //             swap(arr[i], arr[l]);
    //             i = l;
    //         }
            
    //         else if(arr[r] > arr[i])
    //         {
    //             swap(arr[r], arr[i]);
    //             i = r;
    //         }
            
    //         else
    //         return ;
    //     }
        
    // }

    // void deletionOfNode()
    // {
    //     arr[1] = arr[size];
    //     size--; // deletion of last node
    //     int index = 1;
    //     // now we put the root node at its correct position 
    //     while(index < size)
    //     {
    //         int rightChild = index*2 +1;
    //         int leftChild  = index*2;
    //         int largest = index;

    //         int maxi = max(arr[rightChild], arr[leftChild]);    // nahi chale ga kyo ki last mai agar 2 chid hue hee nahi toh??

    //        if(leftChild < size && arr[leftChild] > arr[largest])
    //        {
    //             largest = leftChild;
    //        }

    //        if(rightChild < size && arr[rightChild] > arr[largest])
    //        {
    //             largest = rightChild;
    //        }

    //         // now i have the largest of the two child and now i can swap
    //         if(index != largest)
    //         {
    //             swap(arr[index], arr[largest]);
    //             index = largest;
    //         }
            

    //         else
    //         return ;

    //     }

    // }
};

int main()
{
    heap h1;
    h1.insertInHeap(50);
    h1.insertInHeap(55);
    h1.insertInHeap(53);
    h1.insertInHeap(52);
    h1.insertInHeap(54);
    h1.insertInHeap(5);
    h1.insertInHeap(51);
    h1.insertInHeap(60);
    h1.insertInHeap(9);

    h1.print();

    h1.deletionOfNode();

    h1.print();


}