#include <iostream>
#include <vector>
#include <algorithm>

// class Solution {
// public:
    // int removeElement(std::vector<int>& nums, int val) {
      // std::sort(nums.begin(), nums.end()) ;

      // std::vector<int>::iterator first_it = std::find(nums.begin(), nums.end(), val) ;
      //  auto last_it = std::find(nums.rbegin(), nums.rend(),val) ;
      
      //  if (first_it != nums.end() && last_it != nums.rend())
            // nums.erase(first_it, last_it.base());
      // return nums.size() ;
    // }
// };



class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {

      auto it = nums.begin() ;

      for( ; it != nums.end() ; )
      {
        if (*it == val)
        {
            it = nums.erase(it) ;
        }
        
        else 
        {
          it++;
        }
      }


      return nums.size() ;
    }
};





int main()
{
  std::vector<int> nums {2, 3,2 ,3 };
  Solution sol{} ;
  auto print = [&] (std::vector<int> & vec)
  {
    for (auto & a : vec)
      std::cout << "Element : " << a << std::endl ;
  };
  auto x = sol.removeElement(nums, 3) ;
  std::cout << x << std::endl ;
  print(nums) ;
  
}
