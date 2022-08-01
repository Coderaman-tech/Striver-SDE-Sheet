# Approach


# 1.Reverse a LinkedList
Approach 1-We will use three-pointers to traverse through the entire list and interchange links between nodes. One pointer to keep track of the current node in the list. The second one is to keep track of the previous node to the current node and change links. Lastly, a pointer to keep track of nodes in front of current nodes.

Approach 2-We traverse to the end of the list recursively.

As we reach the end of the list, we make the end node the head. Then receive previous nodes and make them connected to the last one.

At last, we link the second node to the head and the first node to NULL. We return to our new head.

# 2.Middle of the Linked List
In the Tortoise-Hare approach, we increment slow ptr by 1 and fast ptr by 2, so if take a close look fast ptr will travel double than that of the slow pointer. So when the fast ptr will be at the end of Linked List, slow ptr would have covered half of Linked List till then. So slow ptr will be pointing towards the middle of Linked List.

# 3.Merge Two Sorted Lists
The idea to do it without extra space is to play around with the next pointers of nodes in the two input lists and arrange them in a fashion such that all nodes are linked in increasing order of values.

Approach :
Step 1: Create two pointers, say l1 and l2. Compare the first node of both lists and find the small among the two. Assign pointer l1 to the smaller value node.
Step 2: Create a pointer, say res, to l1. An iteration is basically iterating through both lists till the value pointed by l1 is less than or equal to the value pointed by l2.
Step 3: Start iteration. Create a variable, say, temp. It will keep track of the last node sorted list in an iteration.
Step 4: Once an iteration is complete, link node pointed by temp to node pointed by l2. Swap l1 and l2.
Step 5: If any one of the pointers among l1 and l2 is NULL, then move the node pointed by temp to the next higher value node.

# 4.Remove Nth Node From End of List
What if we had to modify the same above approach to work in just one traversal? Let’s see what all information we have here:
We have the flexibility of using two-pointers now.
We know, that the n-th node from the end is the same as (total nodes – n)th node from start.
But, we are not allowed to calculate total nodes, as we can do only one traversal.
What if, one out of the two-pointers is at the nth node from start instead of the end? Will it make anything easier for us?
Yes, with two pointers in hand out of which one is at the n-th node from start, we can just advance both of them till the end simultaneously, once the faster reaches the end, the slower will stand at the n-th node from the end.

#  Add Two Numbers
 Keep track of the carry using a variable and simulate digits-by-digits sum starting from the head of the list, which contains the least significant digit.
