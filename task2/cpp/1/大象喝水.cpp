#include<iostream>
using namespace std;
int main()
{
	int h, r;
	cin >> h >> r;
	double v, n;
	v = 3.14 * r * r * h;
	n = 20000 / v;
	if (fmod(n, 1) == 0)
	{
		cout << int(n) << endl;//ת��Ϊint���ͣ��������".0"
	}
	else
	{
		cout << (int)ceil(n) << endl;//����ȡ��
	}
	return 0;
}