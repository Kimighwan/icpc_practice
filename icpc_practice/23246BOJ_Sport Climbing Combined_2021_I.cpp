#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

int n;
vector<tuple<int, int, int, int>> score; // 등번호, 점수

bool F(tuple<int, int, int, int> a, tuple<int, int, int, int> b) {
	int an;
	int a1;
	int a2;
	int a3;
	tie(an, a1, a2, a3) = a;

	int bn;
	int b1;
	int b2;
	int b3;
	tie(bn, b1, b2, b3) = b;

	int ax = a1 * a2 * a3;
	int bx = b1 * b2 * b3;
	
	int as = a1 + a2 + a3;
	int bs = b1 + b2 + b3;

	if (ax == bx) {
		if (as == bs)
			return an < bn;
		return as < bs;
	}
	return ax < bx;
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		int num, a, b, c;
		cin >> num >> a >> b >> c;
		score.push_back({ num, a, b, c });
	}

	sort(score.begin(), score.end(), F);
	for (int i = 0; i < 3; i++)
		cout << get<0>(score[i]) << " ";
}

//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int k, x, y, z;
//		cin >> k >> x >> y >> z;
//
//		v.emplace_back(k, x, y, z);
//	}
//
//	sort(v.begin(), v.end(),
//		[](tuple<int, int, int, int> a, tuple<int, int, int, int> b) {
//			auto [k1, x1, y1, z1] = a;
//			auto [k2, x2, y2, z2] = b;
//
//			if (x1 * y1 * z1 != x2 * y2 * z2) return x1 * y1 * z1 < x2 * y2 * z2;
//			if (x1 + y1 + z1 != x2 + y2 + z2) return x1 + y1 + z1 < x2 + y2 + z2;
//			return k1 < k2;
//		});
//
//	cout << get<0>(v[0]) << ' ' << get<0>(v[1]) << ' ' << get<0>(v[2]) << '\n';
//}