///week06-1.cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> a; ///�ʺA�}�Ca�̭��˫ܦhint
    a.push_back(20);///���i�h�}�C���̫᭱
    a.push_back(30);
    a.push_back(50);
    a.push_back(2);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;///��a[i]���X��
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<' ';
    }
}
