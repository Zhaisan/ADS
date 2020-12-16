#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int n, m; 
    cin >> n >> m;
    int g[n][n];

    bool used[n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            g[i][j] = 0;
        }
        used[i] = false;
    }

    for (int i = 0; i < m; i++){
        int x, y; 
        cin >> x >> y; 
        g[x - 1][y - 1] = 1;
    }

    stack<int> st; 
    queue<int> q;

    while (st.size() < n){
        for (int i = 0; i < n; i++){
            if (!used[i]){
                bool check = true;
                for (int j = 0; j < n; j++){
                    if (g[i][j] == 1){
                        check = false;
                    }
                } 
                if (check == true){
                    q.push(i);
                    st.push(i);
                    used[i] = true;
                }
            }
        }
        if (q.empty()){
            cout << "No";
            return 0;
        }
        while (!q.empty()){
            int x = q.front(); 
            q.pop();
            for (int i = 0; i < n; i++){
                g[i][x] = 0;
            }
        }
        
    }
    
    cout << "Yes" << '\n';

    while (!st.empty()){
        cout << st.top() + 1 << " "; 
        st.pop();
    }
    return 0;
}