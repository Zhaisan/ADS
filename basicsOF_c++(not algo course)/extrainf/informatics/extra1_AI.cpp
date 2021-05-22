//Капитан Флинт
#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	string direction;
	int steps;
	
	int x = 0;
	int y = 0;

	while(cin >> direction >> steps){
		if(direction == "North"){
			y += steps;
		}
		if(direction == "South"){
			y -= steps;
		}
		if(direction == "East"){
			x += steps;
		}
		if(direction == "West"){
			x -= steps;
		}
	}

	cout << x << " " << y << endl;
	
	return 0;
}
