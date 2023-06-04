// A. Translation
// Difficulty: 800
// https://codeforces.com/problemset/problem/41/A?mobile=true

#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;

int main(){
    string word;
    string drow;
    string rword;

    cin >> word;
    cin >> drow;
    rword = word;
    reverse(rword.begin(), rword.end());
    
    if (rword == drow){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

    return 0;
}


