#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *ptr = head;
        int length = 0;
        while(ptr)
        {
            ptr = ptr->next;
            length++;
        }
        if(head == NULL || head->next == NULL|| k==0)
        {
            return head;
        }
        k = k%length;
        k = length - k;
        if(k==length)
        {
            return head;
        }
        ListNode *ptr1 = head, *prev = head;
        while(k--)
        {
            prev = ptr1;
            ptr1 = ptr1->next;
        }
        prev->next = NULL;
        ptr = ptr1;
        while(ptr->next)
        {
            ptr = ptr->next;
        }
        ptr->next = head;
        return ptr1;
    }
};

int main()
{
   return 0;
}
