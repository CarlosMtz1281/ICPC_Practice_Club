using namespace std;

#include <vector>

bool isValidSubsequence(vector<int> array, vector<int> sequence) {

  int index1 = 0;
  int index2 = 0;

  while (index1 < array.size()){

    if (array[index1] == sequence[index2]){
      index2++;
    }
    index1++;
  }

  if (index2 == sequence.size()){
    return true;
  }

  return false;
}
