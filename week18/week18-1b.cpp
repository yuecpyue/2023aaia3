//week18-1b.cpp leetcode 2185. Counting Words With a Given Prefix
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans=0;
        int L=pref.length();//字的長度
        //for(int i=0;i<words.size();i++){
        for(string word:words){
            if(pref==word.substr(0,L)) ans++;
        }
        return ans;
    }
};