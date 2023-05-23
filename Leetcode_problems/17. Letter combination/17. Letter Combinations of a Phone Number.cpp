// 17. Letter Combinations of a Phone Number - medium

class Solution {
public:
    vector<string> letterCombinations(string digits) {
       unordered_map <char,string> map{
           {'2',"abc"},
           {'3',"def"},
           {'4',"ghi"},
           {'5',"jkl"},
           {'6',"mno"},
           {'7',"pqrs"},
           {'8',"tuv"},
           {'9',"wxyz"}
       };
        vector <string> v1{""};
        vector <string> v2;

        if(digits == ""){return v2; }

       for (char i : digits){
           string temp;
           while (v1.size() != 0){
              temp = v1.back();
              for(char j : map[i]){
                  v2.push_back(temp + j);
              }
              v1.pop_back();
           }
           v1 = v2;
           v2.clear();
       }

        return v1;
    }
};