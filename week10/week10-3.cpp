///week10-3.cpp �i��class�غc�禡
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
    Cat cat1("�p��"),cat2("�p��");
    cat1.print();
    cat2.print();
}
