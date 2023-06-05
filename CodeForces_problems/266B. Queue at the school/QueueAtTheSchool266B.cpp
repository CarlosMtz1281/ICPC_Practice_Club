// Queue at the school
// Difficulty: 800
// https://codeforces.com/problemset/problem/266/B

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
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string line;
    int kids;
    int time;

    cin>>kids>>time>>line;
    line += ' ';

    while(time--){
        for(int i = 0; i < kids; i++){
            if(line[i]=='B' && line[i+1]=='G'){
                swap(line[i],line[i+1]);
                i++;
            }
        }
    }


    return 0;
}