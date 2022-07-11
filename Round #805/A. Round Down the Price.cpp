#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string arr;
		cin >> arr;
		arr[0] -= 1;
		bool flag = true;
		for (int i = 0; i < arr.size(); i++) {
			if (flag && arr[i] == '0') continue;
			else flag = false;
			cout << arr[i];
		}
		if (flag) cout << 0;
		cout << endl;
	}
}
