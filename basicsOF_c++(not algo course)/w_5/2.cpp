#include <iostream>
#include <deque>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    deque <int> dq;
    while(true){
        char c;
        cin >> c;
        if(c=='!')
        break;
        else if(c=='+'){
            int  x;
            cin >> x;
            dq.push_front(x);
    
        }
        else if(c=='-'){
            int x;
            cin >> x;
            dq.push_back(x);
        }
        else if(c=='*'){
            if(dq.empty()==true)
            cout << "error" << endl;
            else{
                int a=dq.front();
                int b=dq.back();
                cout << a+b << endl;

                dq.pop_front();
                if(dq.empty()==false)
                dq.pop_back();
            }
        }


    }
    return 0;
}