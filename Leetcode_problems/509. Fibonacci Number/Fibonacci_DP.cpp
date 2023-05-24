class Solution {
public:
    // Recursive solution using Dinamic Programing to optimize runtime
    // normal recursive complexity O(2^n)
    // Solution Complexity O(N)
    vector <int> memo ;

    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;

        int memo[n];
        memo[0] = 0;
        memo[1] = 1;

        for (int i = 2; i < n; i++){
            memo[i] = memo[i-1]+memo[i-2];
        }
        return (memo[n-1]+memo[n-2]);
    }
};