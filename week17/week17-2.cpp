//week17-2.cpp leetcode 66. Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N=digits.size(),carry=1;
        for(int i=N-1;i>=0;i--){
            digits[i]+=carry;
            if(digits[i]>=10){
                carry=1;
                digits[i]%=10;
            }
            else carry=0;
        }
        if(carry==0) return digits;//沒進位，印出答案
        else{
            vector<int> ans(N+1);
            ans[0]=carry;
            for(int i=1;i<N;i++){
                ans[i+1]=digits[i];
            }
            return ans;
        }
    }
};