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
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode*temp = head;
        int  count = 1;
        while(count!=k){
            temp = temp->next;
            count++;
        }
        int size = 1;
        ListNode *s = head;
        while(s!=NULL){
            s=s->next;
            size++;
        }
        int req = size-k;
        int go = 1;
        ListNode*c = head;
        while(go!=req){
            c=c->next;
            go++;
        }

        int store = temp->val;
        temp->val = c->val;
        c->val = store;

        return head;
    }
};