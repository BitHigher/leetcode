#include <iostream>

struct ListNode 
{
	int val;
	ListNode *next;
	ListNode(int x): val(x), next(NULL){}
};



ListNode* add_two(ListNode *l1, ListNode *l2)
{
	ListNode *result = new ListNode(0);
    ListNode *cur = result;
    
    int carry = 0;
    while(l1 && l2)
    {
        int val = l1->val + l2->val + carry;
        carry = val/10;
        cur->next = new ListNode(val%10);
        
        l1 = l1->next;
        l2 = l2->next;
        cur = cur->next;
        
    }
    
    ListNode *rest = l1?l1:l2;
    while(rest)
    {
        int val = rest->val + carry;
        carry = val/10;
        cur->next = new ListNode(val%10);
        
        rest = rest->next;
        cur = cur->next;
    }
    
    if(carry)
        cur->next = new ListNode(carry);
        
    cur = result->next;
    delete result;
    return cur;
}


int main()
{
}
