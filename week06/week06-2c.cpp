//week06-2c.cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> a;//step3
	int now;
	while(cin>>now){//step1
		a.push_back(now);//step3
		
		sort(a.begin(),a.end());//step5 sort
		
		int N=a.size();//step6
		if(N%2==1) cout<<a[N/2]<<endl;//step6
		else cout<<(a[N/2-1]+a[N/2])/2<<endl;//step6
		
		//for(int b:a) cout<<b<<' ';//step4
		//cout<<"\n";//step4
		//cout<<now<<endl;//step2 output
	}
}