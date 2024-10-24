//week07-3b.cpp
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x=0,y=0,dir=0;//方向dir 0:右 1:下 2:左 3:上
        int dx[4]={1,0,-1,0};
        int dy[4]={0,1,0,-1};
        for(char c:instructions){
            if(c=='G'){
                x+=dx[dir];
                y+=dy[dir];
            }
            if(c=='L') dir=(dir-1+4)%4;//-1 倒過來轉，會有負號，+4
            if(c=='R') dir=(dir+1)%4;
        }
        if(x==0&&y==0) return true;
        else if(dir==0) return false;
        else return true;
    }
};