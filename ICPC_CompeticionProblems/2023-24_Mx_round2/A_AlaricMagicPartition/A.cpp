// ICPC problem A-Alaric magic partition, submited by Emilio

#include <string>
#include <iostream>
 
using namespace std;

bool compareStringB(char b){
    if(b == '0' || b == '6' || b == '8'){
        return false;
    } else {
        return true;
    }
}

int main()
{
    int nDigitos;
    string digitos;
    int contador = 0;

    int numero;

    cin >> nDigitos;
    cin >> digitos;

    for (int i = 0; i < nDigitos; i++){
        if (compareStringB(digitos[i])){
            contador++;
        }
    }
    

    cout << contador << endl;

    return 0;
}
