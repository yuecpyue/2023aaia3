//week14-6.cpp YKL06.UVA10190(X...o)
#include <iostream>
using namespace std;
int main()
{
	int a,b;//step01:input
	while(cin>>a>>b){
		int bad=0,backup=a;
		while(a>1){//step03:bopifa
			if(a%b>0) bad=1;
			a/=b;
		}
		if(bad==1) cout<<"Boring!\n";
		else{
			a=backup;
			while(a>0){
				cout<<a<<" ";
				a/=b;
			}
			cout<<"\n";
		}
	}//step02:output
}