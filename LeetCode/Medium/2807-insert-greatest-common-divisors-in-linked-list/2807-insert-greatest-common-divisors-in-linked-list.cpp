/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

int hcf(int n1,int n2){
    if(n2>n1){
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
    while(n2!=0){
        int temp = n2;
        n2 = n1%n2;
        n1 = temp;
    }
    return n1;
}
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode*a = head;
        ListNode*b = head->next;
        while(a!=NULL && b!=NULL){
            ListNode*acopy = a;
            ListNode*bcopy = b;
            ListNode*t = new ListNode(hcf(a->val,bcopy->val));
            t->next = b;
            a->next = t;
            a=t->next;
            b=bcopy->next;
        }
        return head;
    }
};