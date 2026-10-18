class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if (list1 == NULL)
            return list2;

        if (list2 == NULL)
            return list1;

        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        ListNode* ans = NULL;
        ListNode* tail = NULL;

        while (temp1 != NULL && temp2 != NULL) {

            ListNode* selected;

            if (temp1->val <= temp2->val) {
                selected = temp1;
                temp1 = temp1->next;
            }
            else {
                selected = temp2;
                temp2 = temp2->next;
            }

            if (ans == NULL) {
                ans = selected;
                tail = selected;
            }
            else {
                tail->next = selected;
                tail = selected;
            }
        }

        if (temp1 != NULL)
            tail->next = temp1;
        else
            tail->next = temp2;

        return ans;
    }
};