
#include <iostream> 
#include <stack>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> stack_;
        int value1 = 0;
        int value2 = 0;
        int sum = 0;
        ListNode* answerHead;
        
        initStack(stack_, l1);
        while (!stack_.empty())
        {
          value1 *= 10;
          value1 += stack_.top();
          stack_.pop();
        }
        
        initStack(stack_, l2);
        while (!stack_.empty())
        {
          value2 *= 10;
          value2 += stack_.top();
          stack_.pop();
        }
        sum = value1 + value2;
        while(sum > 0) 
        {
            ListNode* x = new ListNode(sum % 10);
            if (answerHead == NULL)
            {
              answerHead = x;
            }
            else {
              ListNode* last = answerHead;
              while(last->next)
              {
                last = last->next;
              }
              last->next = x;
            }
              sum = sum / 10;
        }
        return answerHead;
    }
    
   void initStack(stack<int>& stack_, ListNode* head)
   {
        ListNode* current = head;
        while (current)
        {
          stack_.push(current->val);
          current = current->next;
        }
   }
};

int  main() {
  Solution test;
  ListNode node1 = ListNode(3);
  ListNode node2 = ListNode(4);
  ListNode node3 = ListNode(2);
  
  node1.next = &node2;
  node2.next = &node3;

  ListNode node4 = ListNode(5);
  ListNode node5 = ListNode(6);
  ListNode node6 = ListNode(4);

  node4.next = &node5;
  node5.next = &node6;

  ListNode* head;
  head = test.addTwoNumbers(&node1, &node4);
  while (head)
  {
    cout << head->val;
    head = head->next;
  }
  cout << endl; 
  return 0;
}
