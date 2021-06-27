#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	// apply the formula based on the problem statement
	int misha = max((3 * a) / 10, a - ((a / 250) * c));
	int vasya = max((3 * b) / 10, b - ((b / 250) * d));
	if (misha == vasya) {
		cout << "Tie";
	} else if (misha > vasya) {
		cout << "Misha";
	} else {
		cout << "Vasya";
	}
	cout << '\n';
	return 0;
}
