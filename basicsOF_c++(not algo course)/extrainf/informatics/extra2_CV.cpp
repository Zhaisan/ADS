#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, i;
  bool isPrime = true;
  
  cin >> n;
  for(i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (isPrime)
      cout << "prime";
  else
      cout << "composite";

    return 0;
}