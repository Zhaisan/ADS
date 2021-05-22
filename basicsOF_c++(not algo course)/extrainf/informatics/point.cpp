#include <iostream>
#include <set>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> st;
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;
        c = tolower(c);
        st.insert(c);
    }
    if(st.size() == 26) 
        cout << "YES";
    else 
        cout << "NO";
}