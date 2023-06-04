// A. Calculating Function
// Difficulty: 800
// https://codeforces.com/problemset/problem/486/A

# include <iostream>
# include <math.h>

using namespace std;

int main(){
    long long number;
    long long sum;
    cin >> number;
    sum = 0;
    if (number % 2 == 0){
        sum = number/2;
    } else {
        sum = -ceil((number/2));
    }

    cout<<sum<<endl;

    return 0;
}