// 387. First Unique Character in a String - Easy

class Solution {
public:
    int firstUniqChar(string s) {

        unordered_map <char, int> map;
        // Llenamos map de cuentas de cada repeticion de letras
        for(int i = 0 ; i < s.length(); i ++ ){
          map[s[i]]++;
        }

        // Revisamos la repeticion de cada letra en el string
        for(int i = 0; i< s.length(); i ++){
            if(map[s[i]]== 1){
              return i;
            }
        }
        return -1;


        }
    };

