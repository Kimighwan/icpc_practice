#include <iostream>
#include <algorithm>
using namespace std;

int n;
int w[100'002];
int mn = 222222;
pair<int, int> p[5'001];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < 2 * n; i++)
		cin >> w[i];

	sort(w, w + (2 * n));

	for (int i = 0; i < n; i++)
	{
		p[i] = { w[i], w[2 * n - 1 - i] };
		mn = min(p[i].first + p[i].second, mn);
	}

	cout << mn;
}