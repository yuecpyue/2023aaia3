//week07-4.cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        while(ss>>word){//把ss一直讀到word字串裡
            //都不做
        }
        return word.length();
    }
};