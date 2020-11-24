#include <iostream>
#include <stack>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    stack<int> st;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*'){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            if(s[i] == '+'){
                st.push(a + b);
            }
            else if(s[i] == '-'){
                st.push(b - a);
            }
            else if(s[i] == '*'){
                st.push(a * b);
            }
            
        }
        else if(isdigit(s[i]) == true){
            st.push(s[i] - 48);
        }
        
    }
    cout << st.top() << "\n";

    return 0;

}