#include <iostream>
using namespace std;

int n, s;
int a[100005];
int mn = 0x7fffffff;
int sum = 0;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> s;
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int en = 0;
	sum = a[0];

	for (int st = 0; st < n; st++) 
	{
		while (en < n && sum < s ) // 합이 s 이상일 때 까지 en을 증가 // en 보다 커지면 st 옮긴다
		{
			en++;
			if(en != n) sum += a[en];
		}
		if (en == n) break;
		mn = min(mn, en - st + 1);
		sum -= a[st];
	}
	if (mn == 0x7fffffff) mn = 0;
	cout << mn;
}