// https://codeforces.com/gym/104375/problem/G 

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

string solve(){
    int n, cont = 1, cont2 = 0;
    cin >> n;
    string sol = "Jane";
    bool x = true;

    forn(i,n){
        if(cont2 == cont){
            if(x){
                cont++;
                x = false;
            }else{
                x = true;
            }
            
            cont2=0;
            if(sol=="Jane"){
                sol="John";
            }else{
                sol="Jane";
            }
        }
        cont2++;
    }
    return sol; 
}

int main()
{
    cout << solve()<< "\n";

    return 0;
}