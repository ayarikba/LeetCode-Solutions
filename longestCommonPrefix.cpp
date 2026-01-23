#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
  std::string longestCommonPrefix(std::vector<std::string> &strs) {

    if (strs.size() > 200 || strs.size() < 1)
      return "";

    if (strs.size() == 1)
      return strs.at(0);

    char c = 0;
    int i = 0;
    int shortest = 1000;
    int shortest_index = 0;

    for (int k = 0; k < strs.size(); k++) {
      if (strs.at(k).size() == 0)
        return "";

      if (shortest >= strs.at(k).size()) {
        shortest = strs.at(k).size();
        shortest_index = k;
      }
    }

    std::cout << shortest << std::endl;
    std::cout << shortest_index << std::endl;
    while (i < shortest) {
      c = strs.at(shortest_index).at(i);
      for (auto &word : strs) {
        if (word.size() > 200)
          return "";

        if (word.at(i) < 'a' || word.at(i) > 'z')
          return "";

        if (c != word.at(i)) {
          auto n = strs.at(shortest_index).substr(0, i);
          return n;
        }
      }
      i++;
    }

    auto n = strs.at(shortest_index).substr(0, i);
    return n;
  };
};
int main() {
  std::vector<std::string> strs{"dog", "racecar", "car"};

  std::vector<std::string> st{"ab", "a"};
  std::vector<std::string> empty{""};
  auto sol = new Solution();
  std::cout << sol->longestCommonPrefix(strs) << std::endl;
  std::cout << sol->longestCommonPrefix(st) << std::endl;
  std::cout << sol->longestCommonPrefix(empty) << std::endl;
  return 0;
}
