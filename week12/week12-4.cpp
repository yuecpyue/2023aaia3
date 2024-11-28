//week12-4.cpp YKL35.UVA11349 Symmetric Matrix (x)
#include <iostream>
using namespace std;
int a[100][100];//step03:
int main()
{
	int T,N;
	cin>>T;//step01:input
	for(int t=1;t<=T;t++){
		char c,c2;
		cin>>c>>c2>>N;
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				cin>>a[i][j];
			}
		}
		cout<<"Test #"<<t<<": Symmetric.\n";
	}//step02:output
}