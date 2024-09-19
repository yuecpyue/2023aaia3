class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[256]={};//初始值都是0
        for(char c:s){
            H[c]++;//多一個字母C
        }
        for(char c:t){
            H[c]--;//用到一個字母c,陣列資料變少
            if(H[c]<0) return c;
        }
        return ' ';//最後都沒找到，就回傳空白字母
    }
};