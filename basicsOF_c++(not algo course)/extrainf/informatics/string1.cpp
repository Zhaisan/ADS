#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		string t;
		cin >> t;
		if (t == "yellow") {
			cout << "prepare" << endl;
		}
		else if (t == "red") {
			cout << "stop" << endl;
		}
		else cout << "go" << endl;
	}
}
