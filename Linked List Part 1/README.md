# Approach


# 1.Reverse a LinkedList
Approach 1-We will use three-pointers to traverse through the entire list and interchange links between nodes. One pointer to keep track of the current node in the list. The second one is to keep track of the previous node to the current node and change links. Lastly, a pointer to keep track of nodes in front of current nodes.

Approach 2-We traverse to the end of the list recursively.

As we reach the end of the list, we make the end node the head. Then receive previous nodes and make them connected to the last one.

At last, we link the second node to the head and the first node to NULL. We return to our new head.

