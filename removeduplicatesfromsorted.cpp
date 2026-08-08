#include <algorithm>
#include <climits>
#include <cstddef>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *deleteDuplicates(ListNode *head) {
    ListNode *prev = nullptr;
    ListNode *next = nullptr;
    ListNode *head_tmp = head;

    prev = nullptr;
    next = nullptr;
    // 1 1 2 2   // 1
    while (head_tmp && head_tmp->next != nullptr)
    {
        if (head_tmp->val == head_tmp->next->val)
        {
            prev = head_tmp->next ;
            head_tmp->next = prev->next ;
            prev->next = nullptr ;
            delete(prev) ; 
        }        
        
        else 
        {
            head_tmp = head_tmp->next ;
        }
    }
    return head ;
}
};

int main() {
  Solution sol{};

  auto print = [&](ListNode * head) {
    while (head != nullptr)
    {
        std::cout <<"VAL"<< head->val << std::endl ;
        head = head->next ;
    }
};  

ListNode *a = new ListNode(2) ;
ListNode *b = new ListNode(2,a) ;
ListNode *c = new ListNode(1,b) ;
ListNode *d = new ListNode(1,c) ;
// print(d) ;

 print(sol.deleteDuplicates(d));
}