// 844. Backspace String Compare - Easy

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack <char> stack1;
        stack <char> stack2;

        for (char i: s){
            if (i == '#' && stack1.size() != 0 ){
                stack1.pop();
            }else if(i != '#'){
                stack1.push(i);
            }
        }
        for (char i: t){
            if (i == '#' && stack2.size() != 0 ){
                stack2.pop();
            }else if(i != '#'){
                stack2.push(i);
            }
        }
        if (stack1.size() != stack2.size()){
            return false;
        }
        while (true) {
            if (stack1.size()== 0){return true;}
            if (stack1.top() == stack2.top()){
                stack1.pop();
                stack2.pop();

            }else {return false;}
        }

    }
};
