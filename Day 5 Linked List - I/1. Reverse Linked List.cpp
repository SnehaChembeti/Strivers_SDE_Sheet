/*Given the head of a singly linked list, reverse the list, and return the reversed list.*/

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
    ListNode* reverseList(ListNode* head) {
        ListNode* ptr = head, *prev = NULL, *after = NULL;
        while(ptr)
        {
            after = ptr->next;
            ptr->next = prev;
            prev = ptr;
            ptr = after;
        }
        return prev;
    }
};

int main()
{
    return 0;
}
