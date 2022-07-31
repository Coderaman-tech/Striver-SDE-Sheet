//Approach 1
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
         ListNode *newhead=new ListNode(-1);
          ListNode*ptr=newhead;
         ListNode *temp;
        while(list1!=NULL && list2!=NULL){
            if(list1->val<=list2->val){
                ptr->next=list1;
                ptr=ptr->next;
                list1=list1->next;
            }
            else{
                ptr->next=list2;
                ptr=ptr->next;
                list2=list2->next;
            }
        }
        while(list1!=NULL){
            ptr->next=list1;
            list1=list1->next;
            ptr=ptr->next;
        }
        while(list2!=NULL){
            ptr->next=list2;
            list2=list2->next;
            ptr=ptr->next;
        }
        
        return newhead->next;
    }
};

/*
Time Complexity: O(N+M)
Space Complexity: O(N+M)
*/

//Approach 2-By recursion
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)
            return list2;
        if(list2==NULL)
            return list1;
         ListNode *result;
        if(list1->val<=list2->val){
            result=list1;
            result->next= mergeTwoLists(list1->next,list2);
        }
        else{
            result=list2;
            result->next= mergeTwoLists(list1,list2->next);
        }
        return result;
    }
};
/*
Time Complexity: O(N+M)
Space Complexity: O(N+M)
*/

//Approach 3-Most efficient approach

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)
            return list2;
        if(list2==NULL)
            return list1;
        if(list1->val>list2->val)
            swap(list1,list2);
        ListNode *res=list1;
        while(list1!=NULL && list2!=NULL){
          ListNode *temp=NULL;
            while(list1!=NULL && list1->val<=list2->val){
                temp=list1;
                list1=list1->next;
            }
            temp->next=list2;
            swap(list1,list2);
        }
        return res;
    }
};

/*
Time Complexity: O(N+M)
Space Complexity: O(1)
*/
