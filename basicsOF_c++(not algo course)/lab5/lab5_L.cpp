#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cin >> s;
    string s2=s;
    sort(s.begin(),s.end());
    if(s==s2)
    cout << "YES";
    else 
    cout << "NO";

    

    return 0;
}