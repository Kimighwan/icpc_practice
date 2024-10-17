#include <iostream>
using namespace std;

int n;

int main() {
	cin >> n;
	int ans = 2;

	for (int i = 2; i <= n; i++)
	{
		if (i % 2 == 1)
			ans = (ans * 2) % 16769023;
	}

	cout << ans;
}