// https://codeforces.com/gym/103960/problem/J 

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

#define forn(i, e) for (int i = 0; i < e; i++)
#define ll long long
#define forl(i, e) for (ll i = 0; i < e; i++)

ll simp(ll x){
  if (x > 10)
    return 10;
  return x;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll J = 0, M = 0, r = 0, temp = 0, x = 0;

    unordered_map<ll, ll> mp{
        {1, 4},
        {2, 4},
        {3, 4},
        {4, 4},
        {5, 4},
        {6, 4},
        {7, 4},
        {8, 4},
        {9, 4},
        {10, 4},
        {11, 4},
        {12, 4},
        {13, 4},};

    cin >> r;

    forl(i,2){
        cin >> temp;
        mp[temp]--;
        J += simp(temp);
    }
    forl(i,2){
        cin >> temp;
        mp[temp]--;
        M += simp(temp);
    }
    forl(i,r){
        cin >> temp;
        mp[temp]--;
        J += simp(temp);
        M += simp(temp);
    }
    

    /*int sol = -1;

    for(int i = 1; i <= 13; i++){
        if(mp[i] > 0){
            if(M + simp(i) == 23 || J + simp(i) > 23 && M + simp(i) <= 23){
                sol = i;
                break;
            }
        }
    }
    cout << sol << endl;*/
    
    
    if (M >= J){
        x = 23 - M;
        if (x > 10){ cout << -1 << endl;}
        else if (mp[x] != 0){ cout << x << endl;}
        else{ cout << -1 << endl;}
    }
    
    if (J > M){
        if (J < 14){ cout << -1 << endl;}
        x = 24 - J;
        
        while (true){
            if (mp[x] != 0){
                if (simp(x) + M > 23){ cout << -1 << endl;}
                else{ cout << x << endl;}
                break;
            }
            else{ x++;}

            if (x > 13){
                cout << -1 << endl;
                break;
            }
        }
    }

    return 0;
}