#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool anagram(string s,string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        return true;
    }
    return false;

}

int main(){
    string s,t;
    cin >> s >> t;
    if(anagram(s,t)==true)
    cout << "YES";
    else
    cout << " NO";
    
    return 0;
}