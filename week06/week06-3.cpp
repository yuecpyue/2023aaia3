//week06-3.cpp
class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;//一開始在(0,0)
        for(char c: moves){ //針對每一個字母位移
            if(c=='U') y++;
            if(c=='D') y--;
            if(c=='R') x++;
            if(c=='L') x--;
        }
        if(x==0&&y==0) return true;
        else return false;
    }
};