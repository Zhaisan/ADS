#include <iostream>
using namespace std;
double perc(double n,double m){
    double k;
    k=(m/n)*100;
    return k;

}
int main(){
    double n,m;
    cin >> n >> m;
    cout << perc(n,m);
    return 0;
}