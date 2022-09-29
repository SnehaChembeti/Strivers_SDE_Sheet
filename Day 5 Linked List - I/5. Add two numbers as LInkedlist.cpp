/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int a = 0;
        ListNode *newnode = l1,*ptr = l1;
        while(l1 && l2)
        {
            l1->val += (l2->val+a);
            a=0;
            if(l1->val > 9)
            {
                a = 1;
                l1->val = (l1->val)%10;
            }
            ptr = l1;
            l1 = l1->next;
            l2 = l2->next;
        }
        if(l1== NULL && l2)
        {
            swap(l1, l2);
            ListNode *temp = newnode;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = l1;
        }
        while(l1)
        {
            l1->val += a;
            a = 0;
            if(l1->val > 9)
            {
                a = 1;
                l1->val = (l1->val)%10;
            }
            ptr = l1;
            l1 = l1->next;
        }
        if(a==1)
        {
            ListNode *temp = new ListNode(1);
            ptr->next = temp;
        }
        return newnode;
    }
};

int main()
{
    return 0;
}
