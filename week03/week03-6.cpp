//week03-6.cpp
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> a;
	int now;
	while(true){
		cin>>now;
		if(now==0) break;
		a.push_back(now);
	}
	cin>>now;
	int ans=0;
	for(int i:a){
		if(i==now) ans++;
	}
	cout<<ans<<endl;
}