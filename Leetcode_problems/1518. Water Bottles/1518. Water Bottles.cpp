// 1518. Water Bottles - easy

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        int empty = numBottles;
        numBottles = 0;
        while (empty >= numExchange){
          if (empty - numExchange >= 0){
              empty = empty - numExchange +1;
              ans +=1;
          }
        }
        return ans;
    }
};
