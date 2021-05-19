#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int pen, apple;
    cin >> pen >> apple;
    int lol = 100500;
    int trash = 0;
    int i = 0;
    while(i < lol && apple != min(apple, trash)){
        int j = 0;
        while(j < lol && pen == max(pen, apple)){
            pen = pen - apple;
            j++;
        }
        int pineapple = pen;
        pen = apple;
        apple = pineapple;
        
        i++;
    }
    cout << pen + apple;
    return 0;
}