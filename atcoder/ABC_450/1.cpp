#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   int n;
   cin >> n;
   if(n==1){
    cout << 1 << '\n';
    return;
   }

   for(int  i= n;i>=1;i--){
    cout << i << ',';
   }
}