#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a, int b) {
	a = abs(a);  // 处理负数
	b = abs(b);
	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;  // 当 b=0 时，a 就是最大公约数
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