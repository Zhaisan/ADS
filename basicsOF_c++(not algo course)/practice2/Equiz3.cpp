#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){ 
    freopen("input.txt","r",stdin);
    vector <int> v;
    while(true){
    string s;
    cin >> s;
    if(s=="end"){
    cout << "Black Devil";
    break;
    }
    if(s=="push"){
        int x;
        cin >> x;
        v.push_back(x);
        cout << "OK" << endl;
        }
    else if(s=="pop"){
        v.pop_back();
        cout << "OK" << endl;
    }
    else if(s=="size"){
        cout << v.size();
    }
    else if(s=="clear"){
        cout << "OK" << endl;
        v.clear();
    }
    else if(s=="front"){
        cout << v[0] << endl;
    }
    else if(s=="back"){
        cout << v[v.size()-1] << endl;
    }
}

    return 0;
}