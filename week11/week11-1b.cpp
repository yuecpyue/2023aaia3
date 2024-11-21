//week11-1b.cpp UVA11332 step02 bo
#include <bits/stdc++.h>
using namespace std;
int f(int n){
	int ans=0;
	while(n>0){
		ans+=n%10;
		n/=10;
	}
	return ans;
}
int main()
{
	int n;
	while(cin>>n){
		if(n==0) break;//step01:input
		
		n=f(n);
		cout<<n<<endl;
	}
}