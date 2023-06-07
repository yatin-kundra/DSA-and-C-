#include <iostream>
#include <string>

// Function to find maximum length even word
std::string findMaxLenEven(const std::string& str)
{
    int n = str.length();

    int currlen = 0;
    int maxlen = 0;
    int start = -1;

    for (int i = 0; i < n; ++i) {
        if (str[i] == ' ') {
            if (currlen % 2 == 0 && currlen > maxlen) {
                maxlen = currlen;
                start = i - currlen;
            }
            currlen = 0;
        }
        else {
            ++currlen;
        }
    }

    if (currlen % 2 == 0 && currlen > maxlen) {
        maxlen = currlen;
        start = n - currlen;
    }

    return start == -1 ? "00" : str.substr(start, maxlen);
}

// Driver code
int main()
{
    std::string str = "";
    std::cout << findMaxLenEven(str) << std::endl;

    return 0;
}
