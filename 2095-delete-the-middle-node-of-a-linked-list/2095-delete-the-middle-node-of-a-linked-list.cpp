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
    ListNode* deleteMiddle(ListNode* head) {
        // Method 1: Brute force TC:O(N+N/2) SC:O(1)
        if(head == NULL || head->next == NULL) return NULL;
        int index_end = 0;
        ListNode* temp = head;
        while(temp != NULL) {
            temp = temp->next;
            index_end++;
        }
        int index = index_end / 2;  // Middle index

        temp = head;
        for(int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }

        ListNode* deleteNode = temp->next;  // Node to be deleted
        temp->next = deleteNode->next;      // Bypass the middle node
        delete deleteNode;                  // Free the memory

        return head;
        
        // Method 2: Optimized method
        
    }
};
