//week10-4.cpp F020 BMI
 #include <bits/stdc++.h>
using namespace std;
int main()
{
	double h,w;
	cin>>h>>w;
	double bmi=w/(h*h);
	cout<<bmi<<endl;
	
	if(bmi<18.5) cout<<"too thin";
	else if(bmi<24) cout<<"standard";
	else cout<<"too fat";
	
}