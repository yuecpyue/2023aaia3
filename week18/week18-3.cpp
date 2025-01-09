class Solution {//week18-3.cpp leetcode 67. Add Binary
public:
    string addBinary(string a, string b) {
        int N1=a.length(),N2=b.length();
        int carry=0;
        vector<int> ans;
        for(int i=N1-1,j=N2-1;i>=0||j>=0;i--,j--){
            if(i<0){//a用完，只用b
                int now=b[j]-'0'+carry;
                ans.push_back(now%2);
                carry=now/2;
            }else if(j<0){//b用完，只用a
                int now=a[i]-'0'+carry;
                ans.push_back(now%2);
                carry=now/2;
            }else{//兩個都還有
                int now=a[i]-'0'+b[j]-'0'+carry;
                ans.push_back(now%2);
                carry=now/2;
            }
        }
        if(carry>0) ans.push_back(carry);
        int N=ans.size();
        string ans2(N,'0');//長度N,裡面為'0'
        for(int i=N-1;i>=0;i--){
            ans2[i]=ans[N-1-i]+'0';
        }
        return ans2;
        //for(int now:ans) cout<<now;
        //return "";
    }
};