//week02-3.cpp ²Ä¤@ÃD
//leetcode 1768 merge strings

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;//put answer in string
        int N1=word1.length(),N2=word2.length();
        for(int i=0;i<max(N1,N2);i++){
            if(i<N1)ans +=word1[i];//word1[i] put in ans
            if(i<N2)ans +=word2[i];//word2[i] put in ans

        }
        return ans;//send answer
    }
};
