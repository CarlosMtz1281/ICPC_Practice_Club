// Borze
// Difficulty: 800
// https://codeforces.com/problemset/problem/32/B

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
#include <cstdio>
#include <cstring>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string borze, answer;

    cin>>borze;

    for(int i = 0; i < borze.length(); i++){
        if(borze[i] == '-' && borze[i+1] == '.'){
            answer += '1';
            i++;
        } else if (borze[i] == '-' && borze[i+1] == '-'){
            answer += '2';
            i++;
        } else {
            answer += '0';
        }
    }

    cout<<answer<<"\n";


    return 0;
}