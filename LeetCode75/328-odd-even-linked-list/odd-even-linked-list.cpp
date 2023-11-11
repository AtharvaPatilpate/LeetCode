/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode l1(0), l2(0);
        ListNode* even = &l1;
        ListNode* odd = &l2;

        int index = 1;

        while(head) {
            if (index++ % 2 == 1) {
                even = even->next = head;
            }
            else {
                odd = odd->next = head;
            }

            head = head->next;
        }

        even->next = l2.next;
        odd->next = nullptr;
        ListNode* newHead = l1.next;

        return newHead;      
    }
};