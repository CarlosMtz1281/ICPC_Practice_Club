// A. Beautiful Year
// Difficulty: 800
// https://codeforces.com/problemset/problem/271/A
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
#include <stdio.h>
#include <stdlib.h>
 
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    set<char> digits;
    string stryear;
    int year;

    cin>>year;
    year = year + 1; //next year of original year
    while(true){
        stryear = to_string(year);  //convert year to string
        for (auto x:stryear){       //go through all characters of the year and inserts to a set
            digits.insert(x);
        }
        if (digits.size() != 4){    //a set cant have repeated values so if the size is 4, it is a year with no repeated numbers
            year += 1;              //if the size isn't four add a number to the year and clear the sets and repeats
            digits.clear();
            continue;
        } else {                    //if the size of the set is 4 then prints the year
            cout << year << "\n";
            break;
        }
    }

    return 0;
}