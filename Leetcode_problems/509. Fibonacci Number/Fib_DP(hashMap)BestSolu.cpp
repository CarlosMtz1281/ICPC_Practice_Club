// Beats 100% other leetcode solutions
// O(N) time complexity
// Using hash map for memorization to improve runtime over vector

class Solution {
public:
    // declare unordered map for memorization
    unordered_map <int, int> memo;

    //main function
    int fib(int n) {
         if(n == 1){return 1;}
          if(n == 0){return 0;}
 
          memo[0] = 0;
          memo[1] = 1;
          return helper(n,memo);
    }

    //helper function using memorization (dp) and recurcion
    int helper(int n,unordered_map <int,int>& visited){
    if (memo.find(n) == memo.end()){
      memo[n] = helper(n-1, memo)+helper(n-2,memo);
    }
    return memo[n];
  }
};
