class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> arr;

        while (head != nullptr) {
            arr.push_back(head->val);
            head = head->next;
        }

        int maxsum = 0;
        int n = arr.size();

        for (int i = 0; i < n / 2; i++) {
            int sum = arr[i] + arr[n - 1 - i];
            maxsum = max(maxsum, sum);
        }

        return maxsum;
    }
};