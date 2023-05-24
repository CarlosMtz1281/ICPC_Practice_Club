#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <int> vecTemp;
        vecTemp.push_back(1);
        vector <vector<int>> answer;
        answer.push_back(vecTemp);
        for(int i = 0; i<numRows-1; i++){
            vecTemp.clear();
            vecTemp.push_back(1);
            for(int j = 0; j< answer[i].size()-1; j++){
                vecTemp.push_back(answer[i][j]+answer[i][j+1]);
            }
            vecTemp.push_back(1);
            answer.push_back(vecTemp);
        }
        return answer;
    }
};