#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> q;

    while (true){
        string s;
        cin >> s;

        if (s == "push"){
            int x;
            cin >> x;
            q.push(x);
            cout << "ok" << "\n";
        }

        else if (s == "pop"){
            if (!q.empty()){
                cout << q.front() << "\n";
                q.pop();
            }
            else
                cout << "error" << "\n";
        }

        else if (s == "front"){
            if (!q.empty()){
                cout << q.front() << "\n";
            }
            else
                cout << "error" << "\n";
        }

        else if (s == "size"){
            cout << q.size() << "\n";
        }

        else if (s == "clear"){
            while (!q.empty())
            q.pop();
            cout << "ok" << "\n";
        }

        else if (s == "exit"){
            cout << "bye";
            return 0;
        }
    }


}

