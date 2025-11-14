#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	float s=(float)(a+b+c)/2;
	float h=(float)sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%.4f",h);
	return 0;
}
