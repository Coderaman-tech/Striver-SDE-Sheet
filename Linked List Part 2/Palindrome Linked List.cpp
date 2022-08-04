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
    vector<int>make_vector(ListNode* head,vector<int>&v){
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        return v;
    }
    bool isPalindrome(ListNode* head) {
        vector<int>v;
        make_vector(head,v);
        int n=v.size();
        for(int i=0;i<n/2;i++){
            if(v[i]!=v[n-i-1]){
                return false;
            }
        }
        return true;
    }
};
/*
Time Complexity: O(N)

Reason: Iterating through the list to store elements in the array.

Space Complexity: O(N)

Reason: Using an array to store list elements for further computations.
*/

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

//Optimise approach
class Solution {
public:
    ListNode *reverse_list(ListNode* head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* node=reverse_list(head->next);
        head->next->next=head;
        head->next=NULL;
        return node;
        
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return true;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next= reverse_list(slow->next);  
        slow=slow->next;
        fast=head;
        while(slow!=NULL){
            if(slow->val!=fast->val)
                return false;
            slow=slow->next;
            fast=fast->next;
        }
        return true;
    }
};
/*
Time Complexity: O(N/2)+O(N/2)+O(N/2)

Reason: O(N/2) for finding the middle element, reversing the list from the middle element, and traversing again to find palindrome respectively.

Space Complexity: O(1)

Reason: No extra data structures are used.
*/
