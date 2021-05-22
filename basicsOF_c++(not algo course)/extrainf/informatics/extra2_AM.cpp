#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string  n;
    cin >> n;
    reverse(n.begin(),n.end());
    cout << atoi(n.c_str());



    return 0;
}