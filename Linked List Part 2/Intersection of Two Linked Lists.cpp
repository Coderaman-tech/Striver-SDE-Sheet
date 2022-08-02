// Approach 1
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
    int getDifference(ListNode* headA,ListNode* headB){
         int l1=0;
        int l2=0;
         ListNode *ptr1=headA;
         ListNode *ptr2=headB;
        while(ptr1!=NULL ||ptr2!=NULL){
            if(ptr1!=NULL){
                l1++;
                ptr1=ptr1->next;
            }
            if(ptr2!=NULL){
                l2++;
                ptr2=ptr2->next;
            }
        }
        return l1-l2;
    }
    
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       
         int diff = getDifference(headA,headB);
        if(diff < 0) {
            while(diff++ != 0) 
                headB = headB->next;
        }
        else{
            while(diff-- != 0) 
                headA = headA->next;
        }
        while(headA!=NULL){
            if(headA==headB)
                return headA;
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};

/*
Time Complexity:

O(2max(length of list1,length of list2))+O(abs(length of list1-length of list2))+O(min(length of list1,length of list2))

Reason: Finding the length of both lists takes max(length of list1, length of list2) because it is found simultaneously for both of them. Moving the head pointer ahead by a difference of them. The next one is for searching.

Space Complexity: O(1)
*/
//Optimum Approach
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
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * d1=headA;
         ListNode *d2=headB;
        while(d1!=d2){
            if(d1==NULL){
                d1=headB;
            }
            else{
                d1=d1->next;
            }
            if(d2==NULL){
                d2=headA;
            }
            else
            d2=d2->next;
        }
        return d1;
    }
};
/*
Time Complexity: O(2*max(length of list1,length of list2))

Reason: Uses the same concept of difference of lengths of two lists.

Space Complexity: O(1)
*/
