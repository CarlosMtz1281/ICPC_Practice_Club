//Multidimensional Hangman
//https://codeforces.com/gym/103960/problem/F

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

    map<char,int> abc;
    abc['a'];
    abc['b'];
    abc['c'];
    abc['d'];
    abc['e'];
    abc['f'];
    abc['g'];
    abc['h'];
    abc['i'];
    abc['j'];
    abc['k'];
    abc['l'];
    abc['m'];
    abc['n'];
    abc['o'];
    abc['p'];
    abc['q'];
    abc['r'];
    abc['s'];
    abc['t'];
    abc['u'];
    abc['v'];
    abc['w'];
    abc['x'];
    abc['y'];
    abc['z'];

    map <string,int> count;
    int N,C,index, max_val;
    string word,max_key;
    vector<string> vs;

    cin>>N>>C;

    //add words to a vector of strings
    while(N--){
        cin>>word;
        vs.push_back(word);
    }

    //swap * by every letter in abc and count the amount of words in a map
    for(auto l:vs){
        index = l.find('*');
        for(auto x:abc){
            l.replace(index,1,1, x.first);
            count[l]++;
        }
    }

    max_key = " ";
    max_val = 0;

    //check which word has the most repetitions
    for(auto x:count){
        if (x.second > max_val){
            max_val = x.second;
            max_key = x.first;
        }
    }

    cout<<max_key<<" "<<max_val<<"\n";

    return 0;
}