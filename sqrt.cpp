
#include <algorithm>
#include <climits>
#include <iterator>
#include <vector>
#include <iostream>

using namespace std ;



// TODO IMPELEMNT BINARY SEARCH FOR IT


class Solution {
public:
    int mySqrt(int x) {
        double result = 0.0L;
        int sol = 0 ;

        
        while (x)
        {
            result = static_cast<double>(sol * sol) ; 

            if (result == x)
              return sol ;

            if (result > x)
                return sol - 1 ;
            
            sol++; 
        }


        return 0  ;
    }
};



int main()
{
    Solution sol {} ;

    auto print = [&] (vector<int>  vec) {for (auto & a : vec) std::cout << a << std::endl ; } ;

    vector<int> vec = {9,9} ;
    std::cout << sol.mySqrt(8) ;
}