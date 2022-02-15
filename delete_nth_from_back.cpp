class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        List *newnode= new ListNode();
        newnode->next=head;
        List *p1=newnode;
        List *p2=newnode;
        for (int i = 0; i <=n; i++)
        {
            p1=p1->next;
        }
        while (p1->next!=NULL)
        {
            p1->next=p1;
            p2->next=p2;
        }
        p2->next=p2->next->next;
    }
};