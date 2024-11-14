///week10-3.cpp 進階class建構函式
#include <bits/stdc++.h>
using namespace std;

class Cat{
public:
    Cat(string _name){
        name=_name;
    }
    string name;
    void print(){
        cout<<"I am a cat. My name is "<<name <<".\n";
    }
};

int main()
{
    Cat cat1("小花"),cat2("小白");
    cat1.print();
    cat2.print();
}
