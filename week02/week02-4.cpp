//week02-4.cpp
class Solution {
public:
    char findTheDifference(string s, string t) {
        int U[26]={};//
        for ( char c:s){//c++ for loop advanced writing
            U[c-'a']++;// put letter in to corresponding garbage
    }
        for ( char c:t){
            U[c-'a']--;
            if(U[c-'a']<0)return c;//when no enough letter,find the murderer
        }
        return 0;
    }
};
