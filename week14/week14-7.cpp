//week14-7.cpp YKL06.UVA10190(O)
#include <iostream>
using namespace std;
int main()
{
	int a,b;//step01:input
	while(cin>>a>>b){
		if(b==1){//step06:special case
			cout<<"Boring!\n";
			continue;
		}
		int bad=0,backup=a;
		while(a>1){//step03:bopifa
			if(a%b>0) bad=1;
			a/=b;
		}
		if(bad==1) cout<<"Boring!\n";
		else{
			a=backup;
			while(a>1){
				cout<<a<<" ";
				a/=b;
			}
			cout<<"1\n";
		}
	}//step02:output
}