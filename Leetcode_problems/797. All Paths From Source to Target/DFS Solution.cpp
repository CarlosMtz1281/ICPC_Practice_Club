#include <vector>

// Leetcode problem 797. solved with DFS

class Solution {
public:

// dfs search function
    void dfs(vector<vector<int>>& graph, vector<vector<int>>& answer, vector<int>& current, const int& end, const int& actual){
        current.push_back(actual);
        // brake funtion
        if (actual == end){
            answer.push_back(current);
            current.pop_back();
            return;
        }
        // for each checkoing all pointers
        for (const int& i : graph[actual]){
            dfs(graph,answer,current,end,i);

        }
        current.pop_back();
        return;
    }

// main function
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector <vector<int>> answer;
        vector <int> current;
        dfs(graph,answer,current,graph.size()-1,0);
        return answer;
    }
};