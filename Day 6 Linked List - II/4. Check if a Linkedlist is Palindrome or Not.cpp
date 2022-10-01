/*
Given the head of a singly linked list, return true if it is a palindrome or false otherwise.
*/

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
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

    bool isPalindrome(ListNode* head) {
        ListNode *slow = head, *fast = head, *ptr = head;
        while(fast->next && fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = reverseList(slow->next);
        slow = slow->next;
        while(slow)
        {
            if(ptr->val != slow->val)
                return false;
            ptr = ptr->next;
            slow = slow->next;
        }
        return true;
    }
};

int main()
{
}
