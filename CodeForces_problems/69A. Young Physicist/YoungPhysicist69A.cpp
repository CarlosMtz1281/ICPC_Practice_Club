// Young Physicist
// Difficulty: 1000
// https://codeforces.com/problemset/problem/69/A

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

    map<char,int> forces;

    int quantity;
    cin >> quantity;

    int x;
    int y;
    int z;

    for (int i = 0; i < quantity; i++){
        cin >> x >> y >> z;
        forces['x'] += x;
        forces['y'] += y;
        forces['z'] += z;
    }

    if(forces['x'] == 0 && forces['y'] == 0 && forces['z'] == 0){
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

    return 0;
}