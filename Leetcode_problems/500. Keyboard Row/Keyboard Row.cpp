// 500. Keyboard Row - Easy

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map <char, int> fila;
        int tempKeyboard;
        string primeraFila = "qwertyuiopQWERTYUIOP";
        string segundaFila = "asdfghjklASDFGHJKL";
        string terceraFila = "zxcvbnmZXCVBNM";
        vector <string> respuesta;

        for(int i = 0; i<primeraFila.size(); i++){
            fila[primeraFila[i]] = 1;
        }

        for(int i = 0; i<segundaFila.size(); i++){
            fila[segundaFila[i]] = 2;
        }

        for(int i = 0; i<terceraFila.size(); i++){
            fila[terceraFila[i]] = 3;
        }

        for(int i = 0; i<words.size(); i++){
            int tempKeyboard = fila[words[i][0]];
            for(int j = 0; j<words[i].size(); j++){
                if(fila[words[i][j]] == tempKeyboard && j == words[i].size()-1){
                    respuesta.push_back(words[i]);
                }
                if(fila[words[i][j]] != tempKeyboard) break;
            }
        }

        return respuesta;
    }
};