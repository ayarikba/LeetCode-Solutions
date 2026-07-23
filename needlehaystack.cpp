#include <string>
#include <iostream>



using namespace std ;

class Solution {
public:
    int strStr(string haystack, string needle) {
        
        return  haystack.find_first_of(needle) ;

        // return haystack.find(needle) ;
    }
};






int main()
{
    Solution sol {} ;

    std::cout<< sol.strStr("ksfsaglsljgal", "sag") ;
}