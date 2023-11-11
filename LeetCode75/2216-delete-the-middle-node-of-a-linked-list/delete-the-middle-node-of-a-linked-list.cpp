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
    ListNode* deleteMiddle(ListNode* head) {

        if(head->next == NULL) {
            head = NULL;
            return head;
        }

        ListNode* curr = head;
        ListNode* mid = head;
        ListNode* prev = NULL;

        while (curr != NULL && curr->next != NULL)  {
            prev = mid;
            curr = curr->next->next;
            mid = mid->next;
        }

        prev->next = mid->next;

        return head;
    }
};