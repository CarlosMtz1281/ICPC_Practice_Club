#include <iostream>

using namespace std;


int solve(){
// Poner Codigo aqui
int a, b, sol=0;
string x;
cin>>x;
int lenght = x.length();
a = stoi(x.substr(0,1));

if(lenght > 1){
    b = stoi(x.substr(1,1));

    sol+=(10-a)*(lenght-1);
    sol+=(a-1)*lenght;

    sol+=lenght;

    for(char z : x){
        if((int(z)-'0' == a)) continue;
        if((int(z)-'0' > a)) break;
        if(int(z)-'0' < a){
            sol--;
            break;
        }
    }
}else{
    sol=a+1;
}


return sol;
}

int main()
{
    cout << solve() << "\n";
    return 0;
}