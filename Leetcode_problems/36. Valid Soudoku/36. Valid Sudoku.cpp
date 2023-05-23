// 36. Valid Sudoku - medium

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set <char> set;
        //row iteration
        for (int i = 0; i < 9; i++){
            //
            for (int j = 0; j < 9; j++){

                if (set.find(board[i][j]) == set.end()){
                    set.insert(board[i][j]);
                }else if (board[i][j] == '.'){
                    continue;
                }else{return false;}
            }
            set.clear();
        }
        //column iteration
        for (int i = 0; i < 9; i++){
            //
            for (int j = 0; j < 9; j++){

                if (set.find(board[j][i]) == set.end()){
                    set.insert(board[j][i]);
                }else if (board[j][i] == '.'){
                    continue;
                }else{return false;}
            }
            set.clear();
        }

        //square iteration
        for(int row = 0; row < 3; row++){
            for(int col = 0; col < 3; col++){
                set.clear();
                for(int x = 0; x < 3; x++){

                    for (int y = 0; y < 3; y++){
                        if (board[x+(row*3)][y+(col*3)] == '.'){
                            continue;
                        } else if (set.find(board[x+(row*3)][y+(col*3)]) == set.end()) {
                            set.insert(board[x+(row*3)][y+(col*3)]);
                        }else {return false;}
                    }
                }

            }

        }

        return true;
    }
};
