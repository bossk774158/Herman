#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void tax(long long r)
{
	double pi = 3.14159265358979323846;
	double taxi1, taxi2;
	taxi1 = (r * r) * pi;
	taxi2 = (r * r) * 2;
	if (r >= 0 && r <= 10000)
	{
		printf("%.6lf\n", taxi1);
		printf("%.6lf", taxi2);
	}
	else
	{
		printf("Error");
	}
}
int main() 
{
	long long r;
	scanf("%lld", &r);
	tax(r);
	return 0;
}