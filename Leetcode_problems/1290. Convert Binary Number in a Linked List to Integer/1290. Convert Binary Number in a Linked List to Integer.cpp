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
    int getDecimalValue(ListNode* head) {
        int decimal=0; //variable para guardar el numero decimal
        string num=""; //variable para guardar el numero binario 

        while(head!=nullptr){
            num=num+to_string(head->val); //guardamos el numero binario en la variable num
            head=head->next; //iteramos la lista
        }

        reverse(num.begin(),num.end()); //invertimos el numero binario para poder convertirlo a decimal
        int n=num.size()-1;

        for(int i=0;i<=num.size();i++){
            if(num[i]=='1'){ //si el numero binario es 1, sumamos 2^i a la variable decimal
                decimal=decimal+(1*pow(2,i)); 
            }
        }
        return decimal;

        
    }
};