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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *start=new ListNode();
        start->next=head;
        ListNode* fast=start;
        ListNode* slow=start;
       while(n--){
           fast=fast->next;
       }
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        // start node is used for the edge case
        return start->next;
        
    }
};

/*
Time Complexity: O(N)
Space Complexity: O(1)
*/
