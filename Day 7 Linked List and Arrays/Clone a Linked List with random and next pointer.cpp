#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL)
        {
            return NULL;
        }
        map<Node *, Node*>mp;
        Node *dummyhead = new Node(head->val);
        mp[head] = dummyhead;
        mp[NULL] = NULL;
        Node *ptr = head->next;
        while(ptr)
        {
            Node *temp = new Node(ptr->val);
            mp[ptr] = temp;
            ptr = ptr->next;
        }
        ptr = head;
        Node* ptr1 = dummyhead;
        while(ptr)
        {
            ptr1->next = mp[ptr->next];
            ptr1->random = mp[ptr->random];
            ptr = ptr->next;
            ptr1 = ptr1->next;
        }
        return dummyhead;
    }
};

int main()
{
    return 0;
}
