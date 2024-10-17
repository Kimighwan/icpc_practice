#include <iostream>
using namespace std;

int n;
long long seed;
int day[100'001];
long long coin = 0;
bool up = false;

int main() {
	cin >> n >> seed;
	for (int i = 1; i <= n; i++)
		cin >> day[i];

	for (int i = 1; i < n; i++)
	{
		if (!up) // 매수
		{
			if (day[i] < day[i + 1]) {
				coin = seed / day[i];
				seed = seed % day[i];
				up = true;
			}
		}

		if (up) // 매도
		{
			if (day[i] > day[i + 1])
			{
				seed += coin * day[i];
				coin = 0;
				up = false;
			}
		}
	}

	if (coin != 0) { // 마지막 날은 따로 매도해주기
		seed += coin * day[n];
	}

	cout << seed;
}