#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {
  // solved acending order problem


  vector <vector<int> > answer;
  vector <int> vecTemp;
  unordered_set <int> s;
  int targetSum2;
  int target3;

  for (int i : array){
    targetSum2 = targetSum -i;

    for(int j : array){
      target3 = targetSum2 -j;
      if (i == j){continue;}
      if (s.find(target3) != s.end()){
        vecTemp.push_back(target3);
        vecTemp.push_back(j);
        vecTemp.push_back(i);
        sort(vecTemp.begin(),vecTemp.end());
        if (find(answer.begin(),answer.end(),vecTemp)== answer.end()){
          answer.push_back(vecTemp);
        }

        vecTemp.clear();
      }else {
        s.insert(j);
      }

    }
    s.clear();
  }
  vecTemp.clear();
  bool swap = true;

  while ( swap == true){
    swap = false;

    for (int i = 0; i< answer.size();i++){
      if(i == answer.size()-1){break;}
      for (int j = 0; j< 2;j++){
        if (answer[i][j] == answer[i+1][j]){
          continue;
        }
        else if (answer[i][j] > answer[i+1][j]){
            vecTemp = answer[i+1];
            answer[i+1] = answer[i];
            answer[i] = vecTemp;
            swap = true;
            break;
        }else{break;}
      }
    }
  }
  // Write your code here.
  return answer;
}
