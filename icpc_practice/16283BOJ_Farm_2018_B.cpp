#include <iostream>
#include <vector>

// �� a ��ŭ �԰� // ���Ҵ� b ��ŭ ����
// �� + ���� �� �������� Ȯ�� // ���� �Һ��� ��� �� Ȯ�� // ==> ��� ���� ���� ���??

int n, w; // n : �� + ���� // w : ���� �Һ��� ����� ��
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