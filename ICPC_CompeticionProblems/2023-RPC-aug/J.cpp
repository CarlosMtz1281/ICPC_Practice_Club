
#include <iostream>
#include <cmath>


using namespace std;


int solve(){

    long long int jam,max,boxes;
    cin>> jam;
    cin>> max;

    boxes = jam/max;

    if(jam % max != 0){
        boxes++;
    }

    long long int sol;
    sol = jam/boxes;
    cout<<sol<<"\n";



return 1;
}

int main()
{


solve();

    return 0;
}