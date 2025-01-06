//week17-5.cpp leetcode 13. Roman to Integer
class Solution {
public:
    int romanToInt(string s) {
        vector<int> a;
        for(int i=0;i<s.size();i++){
            if(s[i]=='I') a.push_back(1);
            if(s[i]=='V') a.push_back(5);
            if(s[i]=='X') a.push_back(10);
            if(s[i]=='L') a.push_back(50);
            if(s[i]=='C') a.push_back(100);
            if(s[i]=='D') a.push_back(500);
            if(s[i]=='M') a.push_back(1000);
        }
        int ans=0;
        for(int i=0;i<a.size()-1;i++){
            if(a[i]<a[i+1]){
                a[i]=-a[i];
            }
            ans+=a[i];
        }
        ans+=a[a.size()-1];
        return ans;
    }
};