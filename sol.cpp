#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, m;
		cin >> n >> m;
		vector<int> f(n);
		for (int i = 0; i < n; i++) {
			cin >> f[i];
		}
		vector<int> p(n);
		for (int i = 0; i < n; i++) {
			cin >> p[i];
		}
		int sum = 0;
		for (int i = 0; i < n; i++) {
			if (f[i] == m) {
				sum += p[i];
			}
		}
		int sum2 = INT_MAX;
		for (int i = 0; i < n; i++) {
			int tmp = 0;
			for (int j = 0; j < n; j++) {
				if (f[j] == f[i]) {
					tmp += p[j];
				}
			}
			sum2 = min(sum2, tmp);
		}
		if (sum == 0) {
			cout << sum2;
		} else {
			cout << min(sum, sum2);
		}
		cout << '\n';
	}
	return 0;
}
