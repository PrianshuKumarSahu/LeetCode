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
        // if (head == NULL || head -> next == NULL){
        //     return NULL;
        // }
        // ListNode* temp = head;
        // int cnt = 0;
        // while (temp){
        //     cnt++;
        //     temp = temp -> next;
        // }
        // if (cnt == n){
        //     ListNode* newHead = head -> next;
        //     delete head;
        //     return newHead;
        // }
        // int el = (cnt - n);
        // temp = head;
        // while (temp){
        //     el--;
        //     if (el == 0) break;
        //     temp = temp -> next;
        // }
        // ListNode* delNode = temp -> next;
        // temp -> next = delNode -> next;
        // delete delNode;
        // return  head;

        ListNode* fast = head;
        for (int  i=0 ; i< n; i++) fast = fast -> next;
        ListNode* slow = head;

        if (fast == NULL){
            return head -> next;
        }

        while (fast -> next){
            slow = slow -> next;
            fast = fast -> next;
        }

        if (fast == NULL){
            return head -> next;
        }

        ListNode* delNode = slow -> next;

        slow -> next = delNode -> next;
        delete delNode;

        return head;

    }
};