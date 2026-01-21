#include <vector>
#include <iostream>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        if (!nums.size())
            return  {} ;
        
        for (int i  = 0 ; i < nums.size() ; i++)
        {
            for (int j  = 0 ; j < nums.size() ; j++)
            {
                if (nums[i] + nums[j] == target && i != j )
                    return {i , j} ;
            }            
        }
        return {} ;
    }
};

int main()
{
    auto sol = new Solution() ;
    std::vector<int> vector {3, 2, 4};
    std::cout << sol->twoSum(vector, 6)[0] << std::endl ;
    std::cout << sol->twoSum(vector, 6)[1] << std::endl ;


}