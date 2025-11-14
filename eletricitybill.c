#include<stdio.h>
int main()
{
	int u;
	float c,a,t;
	scanf("%d",&u);\
	if (u<=5)
	{
		a=u*1;
		c=10;
	}
	else if (u<=10)
	{
		a=u*2;
		c=20;
	}
		else if (u<=15)
	{
		a=u*3;
		c=30;
	}
	else
	{
	a=u*4;
	c=40;
    }
    t=a+c;
    printf("%.2f",t);
    return 0;
}
