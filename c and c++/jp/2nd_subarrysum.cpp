#include <algorithm>
#include <bitset>
#include <vector>


    std::vector<int> sortByBits(std::vector<int>& arr) {
        //ok so for this enginner rule is applied where each number is updated by a the number itself + number of bits in number*(10001) and then we will sort it and then we will take the modulo.
        
        for(int i=0;i<arr.size();i++)
        {
            arr[i]+=std::bitset<32>(arr[i]).count()*10001;
        }
        
        std::sort(arr.begin(), arr.end());
        
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=arr[i]%10001;
        }
        return arr;
    }


int main()
{
    sortByBits()
    vector<int>

}