class Solution {
public:
    bool isAnagram(string s, string t) {
        int H[256]={},H2[256]={};
        for(char c:s){
            H[c]++;
        }
        for(char c:t){
            H2[c]++;
        }
        for(int i=0;i<256;i++){
            if(H[i]!=H2[i]) return false;
        }
        return true;
    }
};