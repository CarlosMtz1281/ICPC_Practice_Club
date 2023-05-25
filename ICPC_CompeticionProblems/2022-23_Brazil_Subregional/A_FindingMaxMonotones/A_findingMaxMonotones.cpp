// https://codeforces.com/gym/103960/problem/A 

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

ll solve(){
    ll test = 0, sol = 0;
    char temp1, temp2;
    bool actual = false;
    cin >> test;
    
    cin >> temp1;
    forl(i, test-1){
        cin >> temp2;

        if(temp1 == temp2 && temp1 == 'a'){
            if(actual){
                sol++;
            } else{
                sol+=2;
                actual = true;
            }
        } else{
            actual = false;
        }
        temp1 = temp2;
    }

    return sol;
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