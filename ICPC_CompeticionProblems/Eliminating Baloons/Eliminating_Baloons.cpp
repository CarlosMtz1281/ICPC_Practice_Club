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

// Solution for problem https://codeforces.com/gym/103960/problem/E

int solve(){

    int ballons = 0;
    int temp = 0;
    // create unordered set for the arrows
    unordered_multiset <int> set;
    cin >> ballons;

    // iterate in ballon nums
    for (int i  = 0; i < ballons; i++){
        cin >> temp;

        // if there isnt an arrow on that height insert another
        if (set.find(temp) == set.end()){
            set.insert(temp-1);
        }else {
            // if there is an arrow in the height change its height to one bellow
            set.erase(set.equal_range(temp).first);
            set.insert(temp-1);
        }
    }
    cout << set.size();
     return 1;


}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    solve();

    return 0;
}