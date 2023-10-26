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
    ListNode* reverseList(ListNode* head) {
        ListNode* before=nullptr; //variable para guardar el nodo anterior
        while(head!=nullptr){
            ListNode* after=head->next; //variable para guardar el nodo siguiente
            head->next=before;  //el nodo de cabeza ahora apunta al nodo before
            before=head;  //el nodo before ahora es el nodo de cabeza
            head=after; //el nodo de cabeza ahora es el nodo after
        }
        return before;
    }
};