// 744. Find Smallest Letter Greater Than Target - easy
// https://leetcode.com/problems/find-smallest-letter-greater-than-target/description/

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int character = 0;
        int high = letters.size()-1;
        while (character < high){
            int mid = character + (high-character)/2;
            if (letters[mid] <= target){
                character = mid + 1;
            } else{
                high = mid;
            }
        }
        return letters[character] > target ? letters[character] : letters[0];
    }
};
