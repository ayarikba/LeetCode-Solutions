#include <algorithm>
#include <climits>
#include <iterator>
#include <vector>
#include <iostream>

using namespace std ;





    class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            long int x =  0 ;
            int remain = 0 ;
            (digits.back())++ ;

            if (digits.back() == 10)
            {   
                for (auto it = digits.rbegin() ; it != digits.rend(); it++)
                {           
                    
                    *it += remain ;
                    remain = 0 ;
                    if (*it == 10)
                    {
                        
                        remain++; 
                        *it = 0 ;
                    }


                    
                }
                if (remain)
                    digits.insert(digits.begin(), 1);
                return digits;
            }
            else
                return digits;
        }   
    };



int main()
{
    Solution sol {} ;

    auto print = [&] (vector<int>  vec) {for (auto & a : vec) std::cout << a << std::endl ; } ;

    vector<int> vec = {9,9} ;
    print(sol.plusOne(vec)) ;
}