/*
Given a Linked List of size N, where every node represents a sub-linked-list and contains two pointers:
(i) a next pointer to the next node,
(ii) a bottom pointer to a linked list where this node is head.
Each of the sub-linked-list is in sorted order.
Flatten the Link List such that all the nodes appear in a single level while maintaining the sorted order.
Note: The flattened list will be printed using the bottom pointer instead of next pointer. For more clearity have a look at the printList() function in the driver code.
*/

#include<bits/stdc++.h>
using namespace std;

struct ListNode{
	int data;
	struct ListNode * next;
	struct ListNode * bottom;

	ListNode(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}

};

ListNode* mergeTwoLists(ListNode* a, ListNode* b) {

    ListNode *temp = new ListNode(0);
    ListNode *res = temp;

    while(a != NULL && b != NULL) {
        if(a->data < b->data) {
            temp->bottom = a;
            temp = temp->bottom;
            a = a->bottom;
        }
        else {
            temp->bottom = b;
            temp = temp->bottom;
            b = b->bottom;
        }
    }
    if(a) temp->bottom = a;
    else temp->bottom = b;
    return res -> bottom;

}
ListNode *flatten(ListNode *root)
{
        if (root == NULL || root->next == NULL)
            return root;
        root->next = flatten(root->next);
        root = mergeTwoLists(root, root->next);
        return root;
}

int main()
{
    return 0;
}
