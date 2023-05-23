// 946. Validate Stack Sequences -Medium

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack <int> s;
        int contador = 0;
        int x = 0;
        while (true) {
            if(x==popped.size()){
                return true;
            }
            if (s.size() != 0){
                if(popped[x]==s.top()){
                    s.pop();
                    x++;
                    continue;
                } else if(contador >= pushed.size()){
                return false;
                }
            }
            s.push(pushed[contador]);
            contador++;

        }
    }
};
