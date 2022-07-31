# Approach


# 1.Reverse a LinkedList
Approach 1-We will use three-pointers to traverse through the entire list and interchange links between nodes. One pointer to keep track of the current node in the list. The second one is to keep track of the previous node to the current node and change links. Lastly, a pointer to keep track of nodes in front of current nodes.

Approach 2-We traverse to the end of the list recursively.

As we reach the end of the list, we make the end node the head. Then receive previous nodes and make them connected to the last one.

At last, we link the second node to the head and the first node to NULL. We return to our new head.

# 2.Middle of the Linked List
In the Tortoise-Hare approach, we increment slow ptr by 1 and fast ptr by 2, so if take a close look fast ptr will travel double than that of the slow pointer. So when the fast ptr will be at the end of Linked List, slow ptr would have covered half of Linked List till then. So slow ptr will be pointing towards the middle of Linked List.
