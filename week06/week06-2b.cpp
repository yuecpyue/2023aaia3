//week06-2b.cpp
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> a;//step3
	int now;
	while(cin>>now){//step1
		a.push_back(now);//step3
		for(int b:a) cout<<b<<' ';//step4
		cout<<"\n";//step4
		//cout<<now<<endl;//step2 output
	}
}