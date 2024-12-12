//week14-5.cpp YKL06.UVA10190(X)
#include <iostream>
using namespace std;
int main()
{
	int a,b;//step01:input
	while(cin>>a>>b){
		while(a>0){//step03:bopifa
			cout<<a<<" ";
			a/=b;
		}
		cout<<"Boring!\n";
	}//step02:output
}