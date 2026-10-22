class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {0};                       // 3x3 格子,先放0
        string result[3] = {"Draw", "A", "B"};   // 結果的字母
        int who = 1;                             // 現在輪到誰下棋 1:A, 2:B
        for (vector<int> move : moves) {
            int i = move[0], j = move[1];
            a[i][j] = who;                       // 現在輪到誰就放誰
            // 三橫
            if (a[0][0]==who && a[0][1]==who && a[0][2]==who) return result[who];
            if (a[1][0]==who && a[1][1]==who && a[1][2]==who) return result[who];
            if (a[2][0]==who && a[2][1]==who && a[2][2]==who) return result[who];
            // 三直
            if (a[0][0]==who && a[1][0]==who && a[2][0]==who) return result[who];
            if (a[0][1]==who && a[1][1]==who && a[2][1]==who) return result[who];
            if (a[0][2]==who && a[1][2]==who && a[2][2]==who) return result[who];
            // 兩條斜線
            if (a[0][0]==who && a[1][1]==who && a[2][2]==who) return result[who];
            if (a[0][2]==who && a[1][1]==who && a[2][0]==who) return result[who];

            if (who == 1) who = 2;
            else who = 1;
        }
        if (moves.size() == 9) return "Draw";   // 9格都下滿,沒人贏
        return "Pending";                        // 還有空格,遊戲未結束
    }
};
