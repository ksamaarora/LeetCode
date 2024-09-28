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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL) return NULL;
        int cnt=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;
        }
        if(n==cnt){
            head=head->next;
            return head;
        }
        temp=head;
        int postn=cnt-n+1; // node to be deleted 5-2+1
        cnt=1;
        ListNode* prev=NULL;
        while(temp!=NULL && cnt<postn){
            if(cnt==postn){break;}
            else{
                prev=temp;
                temp=temp->next;
                cnt++;
            }
        }
        prev->next=temp->next;
        delete temp;
        return head;
    }
};