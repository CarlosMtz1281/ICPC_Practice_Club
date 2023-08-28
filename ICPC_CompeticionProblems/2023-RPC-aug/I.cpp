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


int solve(){

    int lenArr;
    cin>> lenArr;

    int frogs[lenArr];
    int ant;
    set <int> pads;


    for (int i= 0; i< lenArr; i++){
        cin>>frogs[i];
        if (i == 0 ){
            ant= frogs[i];
            continue;
        }
        for(int j = ant +1; j< frogs[i]; j++){
            pads.insert(j);
        }
        ant = frogs[i];
    }
    int max = frogs[lenArr-1]+1;


    set <int> :: iterator aux = pads.begin();
    int n;
    cin>>n;
    int jump;
    for(int i =0 ; i < n;i++){
        cin>>jump;
        jump--;
        pads.insert(frogs[jump]);
        aux = pads.upper_bound(frogs[jump]);
        if (aux == pads.end()){
            frogs[jump] = max;
            max++;
        }else{
            frogs[jump] = *aux;
            pads.erase(aux);
        }
        cout<< frogs[jump]<<"\n";
    }

return 1;
}

int main()
{


solve();

    return 0;
}