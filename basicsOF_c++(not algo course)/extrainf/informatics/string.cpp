#include <iostream>

using namespace std;

int main() {
	char c;
	string s;
	cin >> c >> s;
	int ans = 0;
	for(int i = 0; i < s.size(); i++) {
		if (c == s[i]) {
			ans++;
		}
	}
	cout << ans;
}
