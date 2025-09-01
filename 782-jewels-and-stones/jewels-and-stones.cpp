class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int isJewel[128] = {0};
        for (char jewel : jewels) {
            isJewel[jewel] = 1;
        }
        int jewelCount = 0;
        for (char stone : stones) {
            jewelCount += isJewel[stone];
        }
        return jewelCount;
    }
};