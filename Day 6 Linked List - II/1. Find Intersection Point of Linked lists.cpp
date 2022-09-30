#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode *>s1, s2;
        ListNode *d1 = headA, *d2 = headB;
        while(d1 != d2)
        {
            d1 = d1 == NULL? headB: d1->next;
            d2 = d2 == NULL? headA : d2->next;
        }
        return d1;
    }
};

int main()
{
    return 0;
}
