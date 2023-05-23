// 268. Missing Number - easy

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set <int> set;
        int n;
        n = nums.size();

        for (int i = 0; i<n;i++){
            set.insert(nums[i]);
        }
        for (int i = 0; i<n;i++){
            if(set.find(i)==set.end()){
                return i;
            }

        }
        return n;
    }
};
