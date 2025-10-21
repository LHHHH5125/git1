#include<iostream>
using namespace std;
int main()
{
	int n, a, b;
	cin >> n;
	a = 5 * n;//在自己电脑上需花费的时间
	b = 11 + 3 * n;//在洛谷上需花费的时间
	if (a < b)
		cout << "Local" << endl;
	else
		cout << "Luogu" << endl;
	return 0;
}