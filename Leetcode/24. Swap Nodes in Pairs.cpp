class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        // Base case: if fewer than 2 nodes, nothing to swap
        if (!head || !head->next) return head;

        ListNode* first = head;
        ListNode* second = head->next;

        // Swap and recurse
        first->next = swapPairs(second->next);
        second->next = first;

        return second;
    }
};
