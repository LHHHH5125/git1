#include<iostream>
#include<cmath>
#include <algorithm>
using namespace std;
int main()
{
	int n, n1, n2, n3, m1, m2, m3;//n为总共需要的及单盒的铅笔数量，m为每盒的价钱
	cin >> n >> n1 >> m1 >> n2 >> m2 >> n3 >> m3;
	int h1 = ceil(1.0*n / n1);//h为至少需要购买的盒数
	int h2 = ceil(1.0*n / n2);
	int h3 = ceil(1.0*n / n3);
	int cost1 = h1 * m1;//cost为购买各类铅笔需花费的总金额
	int cost2 = h2 * m2;
	int cost3 = h3 * m3;
	cout << min({ cost1, cost2, cost3 });
	return 0;
}