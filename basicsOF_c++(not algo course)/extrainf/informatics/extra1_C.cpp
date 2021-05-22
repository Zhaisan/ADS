#include <iostream>
using namespace std;
//Количество положительных элементов
int main() {
    int n;
    cin >> n;
    int a[n];
    int cnt=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
        for(int i=0;i<n;i++){
            if(a[i] >0){
                cnt ++;
            }
        }
        cout << cnt;

    return 0;


}
