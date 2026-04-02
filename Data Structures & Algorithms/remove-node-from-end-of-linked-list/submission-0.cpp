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
        ListNode* temp=head;
        ListNode* prev=nullptr;
        while(temp !=nullptr){
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        int cnt=n;
        if(cnt == 1){
            ListNode* del = prev;
            prev = prev->next;
            delete del;
        }else{
            ListNode* curr = prev;
            while(curr != nullptr){
                if(cnt == 2){
                    ListNode* del = curr->next;
                    curr->next = curr->next->next;
                    delete del;
                    break;
                }
                cnt--;
                curr = curr->next;
            }
        }    
        temp = prev;
        prev = nullptr;
        while(temp != nullptr){
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;

    }
};
