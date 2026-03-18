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
    ListNode* partition(ListNode* head, int x) {

        if(head == NULL || head -> next == NULL) return head;
        vector<int> smaller;
        vector<int> larger;

        ListNode* curr = head;
        while(curr != NULL){
            if(curr -> val < x){
                smaller.push_back(curr -> val);
            }
            else{
                larger.push_back(curr -> val);
            }
            curr = curr -> next;
        }

        curr = head;

        for(int i =0; i< smaller.size() && curr != NULL; i++){
            curr -> val= smaller[i];
            curr = curr -> next;
        }

        for(int i = 0; i<larger.size() && curr != NULL; i++){
            curr -> val  = larger[i];
            curr = curr -> next;
        }

        return head;
        
    }
};
