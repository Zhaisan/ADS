#include <algorithm>
#include <iostream>
#include <deque>
#include <string>
using namespace std;
int main(){
    deque <int> dq;
    while(true){
        string s;
        cin >> s;
        if(s == "exit"){
            cout << "bye";
            break;
        }
        if(s == "push_front"){
            int x;
            cin >> x;
            dq.push_front(x);
            cout << "ok" << endl;
        }
        else if(s == "push_back"){
            int x;
            cin >> x;
            dq.push_back(x);
            cout << "ok" << endl;
        }
        else if(s == "pop_front"){
            if(dq.size() != 0){
                cout << dq.front() << endl;
                dq.pop_front();
            }
            else{
                cout << "error" << endl;
            }
        }
        else if(s == "pop_back"){
            if(dq.size() != 0){
                cout << dq.back() << endl;
                dq.pop_back();
            }
            else{
                cout << "error" << endl;
            }
        }
        else if(s == "front"){
            if(dq.size() != 0){
                cout << dq.front() << endl;
            }
            else{
                cout << "error" << endl;
            }
        }
        else if(s == "back"){
            if(dq.size() != 0){
                cout << dq.back() << endl;
            }
            else{
                cout << "error" << endl;
            }
           
        }
        else if(s == "size"){
            cout << dq.size() << endl;
        }
        else if(s == "clear"){
            cout << "ok" << endl;
            dq.clear();
        }

    }
    return 0;
}