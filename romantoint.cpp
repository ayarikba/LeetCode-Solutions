#include <iostream>
#include <map>
#include <queue>




class Solution {
public:
    int romanToInt(std::string s) { // MCMXCIV  M = 1000, CM = 900, XC = 90 and IV = 4.
        if (s.empty())
            return 0  ;
        
        double number = 0 ;
        std::map<char, int> roman_chars {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100} , {'D', 500}, {'M', 1000}}; /// 1 5 10 50 100 500 1000 ;
        int current_biggest_num = 0 ;
        int current_biggest_index = 0 ;
    

        for (int k = 0 ; k < s.size()  ; k++)
        {
            if (k != s.size() -1)
            {
            if (roman_chars[s.at(k)] >= roman_chars[s.at(k + 1)])
                number += roman_chars[s.at(k)] ;

            if (roman_chars[s.at(k)] < roman_chars[s.at(k + 1)])
                number -= roman_chars[s.at(k)] ;
            }
            else if (k == s.size() -1)
                number += roman_chars[s.at(k)];

            std::cout << number << std::endl ;

        }

        if (1 <= number && number <= 3999)
        {
            return number;
        }
        else
        {
            return 0  ;
        }
    }
};




int main()
{
    auto sol = new Solution();
    std::cout << sol->romanToInt("MCMXCIV") << std::endl ;
}