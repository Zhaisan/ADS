// Upper bound -1
#include <iostream>

using namespace std;

int main() {
	int n, target;
	cin >> n >> target;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < n; i++) {
		if (a[i] < target) continue;
		if (a[i] == target) {
			cout << i + 1;
			return 0;
		}
		else {
			cout << i;
			return 0;
		}
	}
	cout << n;
}
