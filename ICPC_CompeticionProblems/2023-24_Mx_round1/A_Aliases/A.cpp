// https://codeforces.com/gym/104375/problem/A 

#include <iostream>
#include <string>

#include <unordered_map>

using namespace std;

int main()
{
    int num = 0, temp = 0, cont = 0;
    string temps = "", tot = "";
    unordered_map <string,int> map;
    cin >> num;

    for(int i=0; i<num; i++){
        cin >> temp;
        tot = "";
        for(int j=0; j<temp; j++){
            cin >> temps;
            temps = temps[0];
            tot += temps;
        }
        map[tot]++;
    }

    for(auto x : map){
        if(x.second == 1){
            cont++;
        }
    }

    cout << cont<<"\n";

    return 0;
}