

#include <iterator>
#include <vector>
#include <iostream>

using namespace std ;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        size_t target_index = 0 ;
        for (auto it = nums.begin()  ; it != nums.end() ; it++ )
        {
            if (*it == target)
                return std::distance(nums.begin(), it) ;
            else if (target >= *it)
                target_index = std::distance(nums.begin(), it)  + 1;
        }

        return target_index ;
    }
};











int main()
{
    Solution sol {} ;

    auto print = [&] (vector<int> & vec) {for (auto & a : vec) std::cout << a << std::endl ; } ;

    vector<int> vec = {1, 2, 3 ,4 ,6} ;
    std::cout << sol.searchInsert(vec , 5) ;
}