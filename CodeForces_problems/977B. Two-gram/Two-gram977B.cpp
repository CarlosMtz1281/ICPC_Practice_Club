// Two-gram
// Difficulty: 900
// https://codeforces.com/problemset/problem/977/B 
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

    map<string,int> letters;

    int len;
    string s;
    string twogram;

    cin>>len>>s;

    //concatenates each char into string and add to the map adding one to the count of how much it repeats
    for(int i = 0; i < len-1; i++){
        twogram = s[i];
        twogram += s[i+1];              
        letters[twogram] += 1;
    }

    string maxGram;
    int maxfreq = 0;

    //goes through the map and depending the max value it takes the string
    for (auto x:letters){
        if (x.second > maxfreq){
            maxGram = x.first;
            maxfreq = x.second;
        } 
    }

    cout<<maxGram<<"\n";

    return 0;
}