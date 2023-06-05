// A. Magnets
// Difficulty: 800
// https://codeforces.com/problemset/problem/344/A
# include <iostream>

using namespace std;

int main(){
    int number;
    string magnets;
    string order[100000];
    int groups;
    cin>>number;
    for (int i = 0; i < number; i++){
        cin>>magnets;
        order[i] = magnets;
    }
    groups = 0;
    for (int i = 0; i < number; i++){
        if (order[i] != order[i+1]){
            groups = groups+1;
        }
    }
    cout<<groups<<endl;
    return 0;
}