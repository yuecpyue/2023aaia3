//week15-1.cpp UVa12250)) Language Detection not ok
#include <iostream>
using namespace std;
int main()
{
	string hello;
	int t=1;//step03:test case t
	while(cin>>hello){//step01:input
		if(hello=="#") break;
		
		cout<<"Case "<<t<<": ENGLISH\n";
		t++;
	}//step02:output
}