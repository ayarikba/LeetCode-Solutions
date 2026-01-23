#include <iostream>
#include <unordered_map>
#include <vector>

class Solution {
public:
  bool isValid(std::string s) {
    if (s.size() > 10000 || s.size() <= 1)
      return false;

    int entry_size_1 = 0;
    int entry_size_2 = 0;
    int entry_size_3 = 0;
    std::vector<int> order;
    int i = 0;

    for (auto &ch : s) {
      switch (ch) {
      case '(':
        entry_size_1++;
        order.push_back(1);
        break;

      case ')':
        if (entry_size_1 == 0)
          return false;
        if (order.back() == 1)
          entry_size_1--;
        else
          return false;
        order.pop_back();
        break;

      case '{':
        entry_size_2++;
        order.push_back(2);
        break;

      case '}':
        if (entry_size_2 == 0)
          return false;
        if (order.back() == 2)
          entry_size_2--;
        else
          return false;
        order.pop_back();
        break;

      case '[':
        entry_size_3++;
        order.push_back(3);
        break;

      case ']':
        if (entry_size_3 == 0)
          return false;
        if (order.back() == 3)
          entry_size_3--;

        else
          return false;
        order.pop_back();
        break;

      default:
        return false;
        break;
      }
      i++;
    }
    if (entry_size_1 == 0 && entry_size_2 == 0 && entry_size_3 == 0)
      return true;

    return false;
  }
};

int main() {
  auto a = new Solution();

  std::cout << a->isValid("}") << std::endl;

  std::cout << a->isValid("([)]") << std::endl;

  std::cout << a->isValid("{[])}") << std::endl;

  std::cout << a->isValid("({[]{{}}]})");
}
