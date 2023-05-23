// 389. Find the Difference - Easy

class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map <char, int> map;
        for(int i: s){
            if (map.find(i)==map.end()){
                map[i]=1;
            }else{map[i]++;}
        }

        for(int i: t){
            if(map.find(i) == map.end()){
                return i;
            }else if (map[i]>=1){map[i]--;}
            else if (map[i]==0){
                return i;
            }
        }
       return 0;
    }
};
