// 49. Group Anagrams - medium

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // data structures
        unordered_map <string,vector<int>> map;
        vector <string> vecTemp;
        vector<vector<string>> ans;

        //index variable for hash map
        int indice = 0;
        //fill the map by anagrams
        for (string i: strs){
           sort(i.begin(),i.end());

            if (map.find(i) == map.end()){
                map[i].push_back(indice);
            }else {
                map[i].push_back(indice);
            }
            indice ++;
        }
        // get anagrams and place them on arrays
        for (auto i: map){
            vecTemp.clear();

            for (auto j:i.second){
                vecTemp.push_back(strs[j]);

            }
            if (vecTemp.empty()){continue;}
            ans.push_back(vecTemp);
        }
    return ans;

    }
};