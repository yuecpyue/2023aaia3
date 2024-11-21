///week11-2.cpp 試試c++2011 C++11的功能
#include <bits/stdc++.h>///c++11
///setting->compiler->勾c++11

using namespace std;

int main()
{
    vector<int> a;
    unordered_map<int,int> m;///預設C++98不行
    m[999]=13;///hash map 雜湊表
    m[137]=7;
    cout<<"m[999] 的值是 "<<m[999]<<endl;
    cout<<"m[137] 的值是 "<<m[137]<<endl;
    return 0;
}

