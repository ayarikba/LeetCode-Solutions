#include <iostream>
#include <algorithm>
#include <vector>



using namespace std ;

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {


      std::sort(nums.begin(), nums.end());

      int unique_num = std::distance(nums.begin(), std::unique(nums.begin(), nums.end())) ;
      nums.erase(std::unique(nums.begin(), nums.end()), nums.end());


      return unique_num ; 
    }
};


int main()
{

    auto sol = new Solution ; 

    vector<int> vec1 {1, 1, 2} ;

    std::cout << sol->removeDuplicates(vec1) << std::endl ; 


    return 0 ; 
}

