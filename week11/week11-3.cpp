///week11-3.cpp 看看hash map 強處
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int> m;///又小又快
    m["蔡育倫"]=12750300;
    m["鍾竣宇"]=12750085;

    cout<<"蔡育倫的學號是:"<<m["蔡育倫"]<<endl;
    cout<<"鍾竣宇的學號是:"<<m["鍾竣宇"]<<endl;
}
