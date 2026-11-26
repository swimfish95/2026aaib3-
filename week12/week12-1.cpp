// LeetCode 3360. Stone Removal Game
//week12-1.cpp
class Solution {
public:
    bool canAliceWin(int n) {
        int remove = 10; // 材璶ホ繷计
        int turn = 0;    // 癘魁羆Θ秈︽碭
        while (n >= remove) {
            n -= remove; // ǐホ繷
            remove--;    // ぶ 1 聋
            turn++;      // 计 +1
        }
        // 羆计计 -> 程琌 Alice ΘЧ近 Bob ア毖 -> Alice 墓
        return turn % 2 == 1;
    }
};
