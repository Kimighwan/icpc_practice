#include <iostream>
#include <vector>

// 양 a 만큼 먹고 // 염소는 b 만큼 먹음
// 양 + 염소 몇 마리인지 확인 // 어제 소비한 사료 양 확인 // ==> 양과 염소 각각 몇마리??

int n, w; // n : 양 + 염소 // w : 어제 소비한 사료의 양
int a, b;
int x = 0, y = 0;
int cnt = 0;
using namespace std;

int main() {
	cin >> a >> b >> n >> w;

	for (int i = 1; i < n; i++)
	{
		if (a * i + b * (n - i) == w)
		{
			x = i;
			y = n - i;
			cnt++;
		}
	}

	if(cnt != 1) cout << "-1";
	else cout << x << " " << y;
}