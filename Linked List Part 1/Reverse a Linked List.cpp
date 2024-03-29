
// Approach 1 -Iterative method

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
    ListNode* reverseList(ListNode* head) {
        ListNode *preptr=NULL;
        ListNode *currptr=head;
        ListNode *nextptr;
        while(currptr!=NULL){
            nextptr=currptr->next;
            currptr->next=preptr;
            preptr=currptr;
            currptr=nextptr;
            
        }
        head=preptr;
        
   return head;
        
    }
};

//Approach 2 -By recursion
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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL ||head->next==NULL)
            return head;
        ListNode *newhead=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        
        return newhead;
    }
};

/*
Time complexity- O(N)
Space complexity-O(1)
*/
