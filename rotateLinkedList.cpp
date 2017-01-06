/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
  ListNode* init(ListNode* head, int k)
  {
    int i = 0;
    while (i < k)
    {
      head = head->next;
      i++;
    }
    return head;
  }

  ListNode* rotateRight(ListNode* head, int k) {
    int count = 0;
    ListNode* d = head;
    while (d)
    {
      d = d->next;
      count++;
    }
    if (k >= count)
    {
        if (count == 0)
        {
            return head;
        }
        k = k % count;
    }
    if (!head || !k)
    {
      return head;
    }
    ListNode* temp = head;
    ListNode* first = head;
    ListNode* second = init(head, k);
    while(second->next)
    {
      second = second->next;
      first = first->next;
    }
    ListNode* oldHead = head;
    head = first->next;
    second->next = oldHead;
    first->next = NULL;

    return head;

    }
};
