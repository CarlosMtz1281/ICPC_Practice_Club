// https://codeforces.com/gym/104375/problem/B

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

int solve(){
    int n,k,l;
    double bean = 0;
    cin >> n >> k >> l;
    bean = n*k;

    return ceil(bean/l);
}

int main()
{
    int x = solve();

    cout << to_string(x);

    return 0;
}