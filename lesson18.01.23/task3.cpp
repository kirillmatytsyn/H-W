#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int r, b;
	cin >> r >> b;
	int socks_left = 0, days = 0;
	int a = min(r, b);
	days = a;
	r -= a;
	b -= a;
	while (r > 1) {
		socks_left++;
		r -= 2;
	}
	while (b > 1) {
		socks_left++;
		b -= 2;
	}
	cout << days << " " << socks_left;

}