#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a, int b) {
	a = abs(a);  // ������
	b = abs(b);
	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;  // �� b=0 ʱ��a �������Լ��
}
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int max_num = max({ a, b, c });
	int min_num = min({ a, b, c });
	int g = gcd(abs(max_num), abs(min_num));
	cout << min_num / g << "/" << max_num / g;
	return 0;
	}