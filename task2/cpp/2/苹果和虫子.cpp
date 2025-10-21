#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int m, t, s;
	cin >> m >> t >> s;
	double n,a;
	n = s / t;//n为s分钟后吃掉的苹果数量
	a = m - n;//a为剩下的苹果数量
	if (fmod(a, 1) == 0)
	{
		cout << int(a) << endl;
	}
	else
	{
		cout << (int)floor(a) << endl;//向下取整,为剩余的完整苹果数量
	}
	return 0;
}