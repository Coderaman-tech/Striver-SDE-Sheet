//Using hashmap
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
    bool hasCycle(ListNode *head) {
     unordered_set<ListNode*>s;
        while(head!=NULL){
            if(s.find(head)!=s.end())
                return true;
            s.insert(head);
            head=head->next;
        }
        return false;
    }
};
/*
Time Complexity: O(N)

Reason: Entire list is iterated once.

Space Complexity: O(N)

Reason: All nodes present in the list are stored in a hash table.
*/

//Using  Slow and Faster Pointer
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
    bool hasCycle(ListNode *head) {
        if(head==NULL)
            return false;
     ListNode *slow=head;
     ListNode *fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                return true;
        }
        return false;
    }
};
/*
Time Complexity: O(N)

Reason: In the worst case, all the nodes of the list are visited.

Space Complexity: O(1)

Reason: No extra data structure is used.
*/
