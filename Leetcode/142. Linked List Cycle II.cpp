class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*, bool> visited;  // to track visited nodes
        ListNode* temp = head;

        if (head == NULL) return NULL;

        while (temp != NULL) {
            if (visited[temp] == true) {
                return temp;  // cycle detected
            } else {
                visited[temp] = true;  // mark as visited
                temp = temp->next;     // move forward
            }
        }
        return NULL; // reached NULL, no cycle
    } 
    
};
