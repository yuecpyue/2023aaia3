///week06-1.cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> a; ///動態陣列a裡面裝很多int
    a.push_back(20);///推進去陣列的最後面
    a.push_back(30);
    a.push_back(50);
    a.push_back(2);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;///用a[i]取出來
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<' ';
    }
}
