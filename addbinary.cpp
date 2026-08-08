#include <algorithm>
#include <climits>
#include <iterator>
#include <new>
#include <vector>
#include <iostream>

using namespace std ;




// resolve this qst


class Solution {
public:
    string addBinary(string a, string b) {
        string c ;
        int remain = 0, add = 0 ;
        int val1 , val2 = 0 ;

        for (auto it = a.rbegin(), it2 = b.rbegin() ; it != a.rend() || it2 != b.rend() ;) 
        {
            if (it != a.rend())
                val1 = (*it - '0');
            else val1 = 0 ;
            if(it2 != b.rend())
                val2 = (*it2 - '0');
            else val2 = 0;

        add = remain + val1 + val2 ;
        std::cout << "value" << add << std::endl;
        remain = 0 ;
        if (add <= 1)
        c.insert(c.begin(), add + '0');

        else
        {
            c.insert(c.begin(), '0' + (add % 2));
            remain = 1 ;
        }
        if (it != a.rend())
        it++;
        else val1 = 0 ;
        if(it2 != b.rend())
        it2++;
    }
        if (remain)
            c.insert(c.begin(), '1');

        return c ;
    }
};




int main()
{
    Solution sol {} ;

    auto print = [&] (vector<int>  vec) {for (auto & a : vec) std::cout << a << std::endl ; } ;
    std::hardware_destructive_interference_size
    vector<int> vec = {9,9} ;
    std::cout << (sol.addBinary("1111","1111")) ; // 10101 // 11 1 100
}