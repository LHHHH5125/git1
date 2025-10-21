#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char a, b, c, d;

	if (scanf_s("%c%c%c.%c", &a, 1, &b, 1, &c, 1, &d, 1) == 4)
	{
		printf("%c.%c%c%c", d, c, b, a);
	}
	return 0;
}