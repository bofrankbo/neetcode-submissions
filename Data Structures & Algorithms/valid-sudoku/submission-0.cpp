class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<char>> row(9);
        vector<vector<char>> column(9);
        vector<vector<char>> square(9);
        
        // cout << j%3+(j/3)*3 << endl;
        // int counter_r = 0;
        // int counter_c = 0;
        for (int i=0; i<board.size(); i++){
            for (int j=0; j<board[i].size(); j++){
                if (board[i][j] != '.'){
                    row[i].push_back(board[i][j]);
                    column[j].push_back(board[i][j]);
                    square[(i/3)*3 + j/3].push_back(board[i][j]);
                }
            }
        }

        for (int i=0; i<board.size(); i++){
            unordered_set<char> setR(row[i].begin(), row[i].end());
            unordered_set<char> setC(column[i].begin(), column[i].end());
            unordered_set<char> setS(square[i].begin(), square[i].end());

            if (row[i].size() > setR.size() ||
            column[i].size() > setC.size() ||
            square[i].size() > setS.size()){
                return false;
            }
            // cout<< row[i].size() << setR.size() << endl;
            
        }
        return true;


        // for (const auto& col : square){
        //     for (const auto& c : col){
        //         cout << c << " ";
        //     }
        //     cout << endl;
        // }
        // return false;
    }
};
