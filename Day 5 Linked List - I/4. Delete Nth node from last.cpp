/*
Given the head of a linked list, remove the nth node from the end of the list and return its head.
*/

#include<bits/stdc++.h>
using namespace std;

 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *ptr = head, *newhead = head;
        while(n--)
        {
            ptr = ptr->next;
        }
        if(ptr == NULL)
        {
            if(head->next == NULL)
                return NULL;
            else
                return head->next;
        }
        while(ptr->next)
        {
            head = head->next;
            ptr = ptr->next;
        }
        head->next = head->next->next;
        return newhead;
    }
};

int main()
{
    return 0;
}
