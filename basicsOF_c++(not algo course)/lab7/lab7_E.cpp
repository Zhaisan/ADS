#include <iostream>
using namespace std;

bool isDivider(int x){
    if(x == 1)
        return true;
    if(x % 2 != 0)
        return false;
    return isDivider(x / 2);
}

int main(){
    int n;
    cin >> n;
    if(isDivider(n) == true)
        cout << "YES";
    else 
        cout << "NO"; 
    return 0;
}