#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    deque <string> first;
    deque <string> second;
    for(int i = 0; i <= n ; i++)
    {
        string s;
        getline(cin, s);
        if(s[0] == '-') 
        {
            cout<< first.front() << '\n';
            first.pop_front();
        }
        else if(s[0] == '+') {
            second.push_back(s.substr(2,s.size() - 2));
        }
        else if(s[0] == '*'){

        second.push_front(s.substr(2,s.size() - 2));
        }
        if(second.size() > first.size())
        {
            string x = second.front();
            second.pop_front();
            first.push_back(x);
        }
    }
    return 0;
}