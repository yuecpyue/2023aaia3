//week16-6.cpp SOIT106_ADVANCE_011 進階題：2進位轉10進位
#include <iostream>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int d0=a[0]-'0';
	int d1=a[1]-'0';
	int d2=a[2]-'0';
	int d3=a[3]-'0';
	cout<<d0*8+d1*4+d2*2+d3<<endl;
}