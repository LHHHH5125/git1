#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int m, t, s;
	cin >> m >> t >> s;
	double n,a;
	n = s / t;//nΪs���Ӻ�Ե���ƻ������
	a = m - n;//aΪʣ�µ�ƻ������
	if (fmod(a, 1) == 0)
	{
		cout << int(a) << endl;
	}
	else
	{
		cout << (int)floor(a) << endl;//����ȡ��,Ϊʣ�������ƻ������
	}
	return 0;
}