#include <iostream>
#include <limits>
#include <vector>

class Solution {
public:
  bool isPalindrome(int x) {
    std::vector<int> tmp{};
    double tmp_num_ = 0;
    double original_num = x;
    if (0 > x || x >= std::numeric_limits<int>::max() - 1)
      return false;

    while (x > 0) {

      tmp.push_back(x % 10);
      x = x / 10;
    }

    if (tmp.size() == 1 || tmp.size() == 0)
      return true;

    for (auto &num : tmp) {
      tmp_num_ = num + (tmp_num_ * 10);
    }

    if (tmp_num_ == original_num) {
      return true;
    }

    return false;
  }
};



int main() {
  auto sol = new Solution();
  std::cout << std::numeric_limits<int>::max() << std::endl;
  std::cout << sol->isPalindrome(1234567899) << std::endl;
  std::cout << sol->isPalindrome(121) << std::endl;
  std::cout << sol->isPalindrome(11) << std::endl;
  std::cout << sol->isPalindrome(-121) << std::endl;
  std::cout << sol->isPalindrome(10) << std::endl;
}
