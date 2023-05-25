// https://codeforces.com/gym/103960/problem/I 

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
 
 
#define forn(i,e) for(int i = 0; i < e; i++)
#define ll long long
#define forl(i, e) for (ll i = 0; i < e; i++)

char solve(){
    ll x;
    forl(i,8){
        cin >> x;
        if(x == 9){
            return 'F';
        }
    }
    return 'S';
}

int main()
{
    #ifndef NOTDEF
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    cout << solve();

    return 0;
}