//Beautiful Matrix
//Difficulty: 800
//https://codeforces.com/problemset/problem/263/A

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

    long Rcounter = 0;
    long Ccounter = 0;
    long moves;

    string matrix;

    for(int i = 0; i < 5; i++){
        getline(cin,matrix);
        Rcounter++;
        if (find(matrix.begin(),matrix.end(),'1') != matrix.end()){
            break;
        }
    }

    matrix.erase(remove_if(matrix.begin(),matrix.end(),::isspace),matrix.end());

    for(char x:matrix){
        Ccounter++;
        if (x == '1'){
            break;
        }
    }

    Ccounter -= 3;
    Ccounter = abs(Ccounter);

    Rcounter -= 3;
    Rcounter = abs(Rcounter);

    moves = Rcounter + Ccounter;

    cout<<moves<<"\n";


    return 0;
}