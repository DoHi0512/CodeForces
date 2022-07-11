#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	while (n--) {
		string arr;
		int cnt = 0, ans = 0, alp[27] = {};
		cin >> arr;
		for (int i = 0; i < arr.size(); i++) {
			if (alp[arr[i] - 'a']) continue;
			if (cnt == 3) {
				fill(alp, alp + 27, 0);
				ans++;
				cnt = 0;
			}
			if (!alp[arr[i] - 'a']) {
				alp[arr[i] - 'a'] = 1;
				cnt++;
			}
		}
		printf("%d\n", ans + 1);
	}
}
