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
