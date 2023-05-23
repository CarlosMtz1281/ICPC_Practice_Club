class Solution {
public:
    bool isPalindrome(int x) {
        int sum = 0;
        if (x<0 || (x != 0 && x%10 == 0)){ 
            return false; 
        }
        while(x>sum)
        {
            cout << x << endl;
            sum = sum*10+x%10;
            x = x/10;
            cout << sum << endl;
            
        }
        return (sum == x || x == sum/10);

        }
};
