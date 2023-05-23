// 1046. Last Stone Weight - easy

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

    priority_queue <int> h;
    //llenamos
    for(int i : stones){
        h.push(i);
    }
    int x;x
    int y;

    while(h.size()>1){
        x = h.top();
        h.pop();
        y = h.top();
        h.pop();

        if (x-y != 0){
            h.push(x-y);
        }
    }
    if (h.size() == 0){
        return 0;
    }
    return h.top();
    }

};