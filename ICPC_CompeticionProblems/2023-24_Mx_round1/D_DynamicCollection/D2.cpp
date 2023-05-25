// https://codeforces.com/gym/104375/problem/D

#include <complex>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
 
#define forn(i,e) for(int i = 0; i < e; i++)
#define ll long long
#define forl(i, e) for (ll i = 0; i < e; i++)

void solve(){
    int n, q, temp, op;
    int up, low, k, minI, maxI;
    bool a;
    cin >> n >> q;
    vector <int> v;

    forn(i,n){
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());

    forn(z, q){
        cin >> op;
        //cout <<endl<< "Op: "<<op << endl;
        if(op == 2){
            cin >> low >> up;
            auto it1 = lower_bound(v.begin(), v.end(), low);
			auto it2 = upper_bound(v.begin(), v.end(), up);
            cout << distance(it1, it2) << "\n";
        } else{
            cin >> k;
            if(!binary_search(v.begin(), v.end(), k)){
                if(k > v.back()){
                    v.push_back(k);
                }else{
                    auto it1 = upper_bound(v.begin(), v.end(), k);
                    int index = distance(v.begin(), it1);
                    v[index] = k;
                }
            }
        }
    }
}

int main()
{
    #ifndef NOTDEF
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    solve();

    return 0;
}