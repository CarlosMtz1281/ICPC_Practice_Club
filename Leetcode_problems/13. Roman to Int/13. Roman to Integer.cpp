// 13. Roman to Integer - easy

class Solution {
public:
    int romanToInt(string s) {
        //create map
        int answer = 0;
        unordered_map<string,int> map;
        //Fill with pairs
        map["I"] = 1;
        map["V"] = 5;
        map["X"] = 10;
        map["L"] = 50;
        map["C"] = 100;
        map["D"] = 500;
        map["M"] = 1000;

        //for loop iterating over string using euler tipe algoritm
        for (int i = 0; i < s.length(); i++){
            // convert to string because s[i] is a char and at() takes string values
            answer = answer + map.at(string(1,s[i]));


            //Exceptions
            // i > 0 to avoid out of bound cases
            if (i > 0){
                if((s[i] == 'V' || s[i] == 'X') && (s[i-1] == 'I')) {answer= answer-2;};
                 if((s[i] == 'C' || s[i] == 'L') && (s[i-1] == 'X')) {answer= answer-20;};
                 if((s[i] == 'D' || s[i] == 'M') && (s[i-1] == 'C')) {answer= answer-200;};
            }

        }

        return answer;

    }
};