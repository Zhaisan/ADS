//Заполнение спиралью
#include <iostream>
using namespace std;
int main()
{
	int a[500][500];
	int n, x, y, c = 0, t = 0, q = -1;
	cin >> n;
	x = n;
	y = n;
	a[n][n] = c;
	while (x != -1) {
		for (int i = 0 ; i <= t; i++) {
			c++;
			x += q;
			if (x != -1) {
				a[x][y] = c;
			}
		}
		for (int i = 0 ; i <= t; i++) {
			c++;
			y += q;
			if (x != -1) {
				a[x][y] = c;
			}
		}
		q = -q;
		t++;
	}
	for (int i = 0; i < 2*n + 1; i++) {
		for (int j = 0; j < 2*n +1; j++) {
			if (a[i][j] < 10) {
				cout << "  ";
			}
			else {
				if (a[i][j] < 100) {
					cout << " ";
				}
			}
			cout << a[i][j];
		}
		cout << endl;
	}
}
