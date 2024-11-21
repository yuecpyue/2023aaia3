//week11-5b.cpp 1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;
        for(int num:nums){
            if(num==0) ans*=0;
            if(num>0) ans*=1;
            if(num<0) ans*=-1;
        }
        if(ans>0) return 1;
        else if(ans<0) return -1;
        else return 0;
        
    }
};