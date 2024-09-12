#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int d50=a/50;
	int d5=a%50/5;
	int d1=a%5;
	printf("%d %d %d %d\n",a,d50,d5,d1);
}