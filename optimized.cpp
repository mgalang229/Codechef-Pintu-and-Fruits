#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array;

int n, m, f[50], p[50];

void solve() {
	cin >> n >> m;
	for(int i=0; i<n; ++i)
		cin >> f[i];
	for(int i=0; i<n; ++i)
		cin >> p[i];
	int ans=1e9;
	for(int i=1; i<=m; ++i) {
		bool found=0;
		int sum=0;
		for(int j=0; j<n; ++j) {
			if(f[j]==i) {
				found=1;
				sum+=p[j];
			}
		}
		if(found) {
			ans=min(ans, sum);
		}
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
