#include <algorithm>
#include <climits>
#include <iterator>
#include <vector>
#include <iostream>

using namespace std ;



// TODO 

class Solution {
public:
    int climbStairs(int n) {
        static int sol = 0 ; 

        while (n > 0)
        {
        if (n >= 1)
        {
            sol += climbStairs(n -1);
            n -= 1 ;
        }
        else if (n >= 2)
            sol += climbStairs(n - 2) ;
            n -= 2 ;
        }

        if (n == 1)
        {
            return 1 ;
        }
        if (n == 2) 
            return 2 ;

        return sol ; 
    }
};



int main()
{
    Solution sol {} ;

    auto print = [&] (vector<int>  vec) {for (auto & a : vec) std::cout << a << std::endl ; } ;

    vector<int> vec = {9,9} ;
    std::cout << sol.climbStairs(5) ;
}