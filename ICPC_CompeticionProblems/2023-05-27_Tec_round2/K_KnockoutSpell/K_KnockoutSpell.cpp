// ICPC problem K-Knockout Spell, vectors, O(2n), submited by Emilio


#include <iostream>
#include <vector>
 
using namespace std;

int main()
{

    int N;
    int K;
    int temporal;
    int compararN;
    int resultado = 0;

    vector <vector<int>> numeros;
    vector <int> temporalV;

    cin >> N;
    cin >> K;


    for (int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> temporal;
            temporalV.push_back(temporal);
        }
        numeros.push_back(temporalV);
        temporalV.clear();
    }

    for (int i = 0; i <= N-K; i++){
        for (int j = 0; j <= N-K; j++){
            compararN = numeros[i][j];
            if (numeros[i+K-1][j] == compararN && numeros[i][j+K-1] == compararN && numeros[i+K-1][j+K-1] == compararN){
                resultado++;
            } else {
                continue;
            }
        }
    }

    cout << resultado << endl;



    return 0;
}