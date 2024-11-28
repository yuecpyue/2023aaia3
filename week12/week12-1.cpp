///week12-1.cpp 了解Link list 的node

#include <iostream>
#include <string>
using namespace std;
///struct Node{};
///class Cat{};
struct Node{
    int val;
};
class Cat{
public:
    string name;
};
int main()
{
    Cat cat1;///大寫的形狀,宣告小寫的變數
    cat1.name="Kitty";
    Node node;
    node.val=1;
};///沒error即可
