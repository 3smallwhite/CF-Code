#include <bits/stdc++.h>

using namespace std;

int t;
int n, a[200010];
int f[200010];

int main() {
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
			f[i] = n;
		}
		f[1] = 1;
		for (int i = 1; i <= n; ++i) {
			f[i] = min(f[i], f[i - 1] + 1);
			if (i + a[i] <= n) f[i + a[i]] = min(f[i + a[i]], f[i - 1]);
		}
		cout << f[n] << "\n";
	}
	return 0;
}