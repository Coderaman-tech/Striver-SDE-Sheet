# 1.Intersection of Two Linked Lists
The difference of length method requires various steps to work on it. Using the same concept of difference of length, a different approach can be implemented. The process is as follows:-

*Take two dummy nodes for each list. Point each to the head of the lists.

*Iterate over them. If anyone becomes null, point them to the head of the opposite lists and continue iterating until they collide.

# 2.Linked List Cycle
Using slow and fast pointer.

# 3.Palindrome Linked List
*Approach 1- Store every element in vector and perform general method to find it is plaindrome or not

*Approach 2-

Following are the steps to this approach:-
*Find the middle element of the linked list.

*Reverse linked list from next element of middle element.

*Iterate through the new list until the middle element reaches the end of the list.

*Use a dummy node to check if the same element exists in the linked list from the middle element.

# Reverse Nodes in k-Group
