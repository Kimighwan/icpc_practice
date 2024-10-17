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
		if (!up) // �ż�
		{
			if (day[i] < day[i + 1]) {
				coin = seed / day[i];
				seed = seed % day[i];
				up = true;
			}
		}

		if (up) // �ŵ�
		{
			if (day[i] > day[i + 1])
			{
				seed += coin * day[i];
				coin = 0;
				up = false;
			}
		}
	}

	if (coin != 0) { // ������ ���� ���� �ŵ����ֱ�
		seed += coin * day[n];
	}

	cout << seed;
}