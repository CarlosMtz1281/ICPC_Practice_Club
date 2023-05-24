//Palindrome with deque

class Solution {
public:
    bool isPalindrome(int x) {
        deque <int> d1;
        deque <int> d2;
        int num;
        string n = to_string(x);
        for (int i = 0; i < n.length() ; i++){
            d1.push_back(n[i]);
            d2.push_front(n[i]);
        }
        if (d1 == d2){
            return true;
        }else{ return false; }

    }//Palindrome with deque 
};
