#include<iostream>
using namespace std;
int main()
{
	int n, a, b;
	cin >> n;
	a = 5 * n;//���Լ��������軨�ѵ�ʱ��
	b = 11 + 3 * n;//��������軨�ѵ�ʱ��
	if (a < b)
		cout << "Local" << endl;
	else
		cout << "Luogu" << endl;
	return 0;
}