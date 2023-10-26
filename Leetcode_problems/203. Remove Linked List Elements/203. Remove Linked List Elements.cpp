ListNode* pop(ListNode* head,int val){
   
    if (head == nullptr) {
        return nullptr; //si la lista esta vacia, regresa nullptr
    }
   
    while (head != nullptr && head->val == val) { //si el valor del nodo es igual al valor que buscamos, borramos el nodo
        ListNode* temp = head; 
        head = head->next; 
        delete temp; 
    }

    ListNode* curr=head;
    while(curr != nullptr && curr->next != nullptr){ 
        if(curr->next->val==val){ //si el valor del nodo siguiente es igual al valor que buscamos, borramos el nodo
            ListNode* temp = curr->next; //creamos un nodo temporal para guardar el nodo siguiente
            curr->next=curr->next->next; //el nodo siguiente del nodo actual sera el nodo siguiente del nodo siguiente
            delete temp;
        }
        else{
            curr=curr->next; 
        }    
    }
    return head;
}

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
       return pop(head,val);
    }
};